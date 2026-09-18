#include "scene_internal.hpp"

namespace beach {
namespace {
FileReference fileReference(Reader& reader) {
    reader.version(1, "file reference");
    auto name = reader.string();
    return {std::move(name), reader.u32()};
}
std::uint32_t phase(Reader& reader) {
    reader.version(1, "time of day");
    const auto value = reader.u32();
    if (value > 7) reader.fail("invalid time-of-day phase");
    return value;
}

void readEnvironment(Reader& reader, SceneStructure& scene) {
    reader.version(1, "environment");
    const auto groups = reader.count(8, 4096);
    for (std::uint32_t group = 0; group < groups; ++group) {
        reader.version(1, "environment group");
        // Original engine has eight phase slots. Keep only the observed schema.
        const auto count = reader.count(62, 8);
        std::vector<EnvironmentSettings> settings;
        for (std::uint32_t i = 0; i < count; ++i) {
            reader.version(1, "environment settings");
            EnvironmentSettings setting;
            for (auto& color : setting.colors)
                for (auto& channel : color) channel = reader.f32();
            for (auto& bound : setting.range) bound = reader.f32();
            for (auto& flag : setting.flags) flag = reader.flag();
            settings.push_back(setting);
        }
        scene.environments.push_back(std::move(settings));
    }
}

void readTextureSwaps(Reader& reader, SceneStructure& scene) {
    reader.version(2, "texture swap container");
    const auto count = reader.count(14);
    for (std::uint32_t i = 0; i < count; ++i) {
        reader.version(4, "texture swap");
        TextureSwap swap;
        swap.name = reader.string();
        const auto choices = reader.count(28);
        for (auto& flag : swap.flags) flag = reader.flag();
        for (std::uint32_t j = 0; j < choices; ++j) {
            TextureChoice choice;
            choice.name = reader.string();
            choice.file = fileReference(reader);
            choice.phase = phase(reader);
            choice.extraIndex = reader.u32();
            swap.choices.push_back(std::move(choice));
        }
        scene.textureSwaps.push_back(std::move(swap));
    }
}

EmbeddedFont readFont(Reader& reader) {
    // USerialize::Load(GEFont), ARM 00057f1c; v5 stores 32 bytes per glyph.
    reader.version(5, "embedded font");
    EmbeddedFont font;
    font.file = fileReference(reader);
    font.size = reader.f32();
    const auto glyphCount = reader.elements(reader.u16(), 32);
    font.flag = reader.flag();
    const auto dataSize = reader.u32();
    if (dataSize > 16 * 1024 * 1024) reader.fail("embedded font data exceeds limit");
    font.data = reader.bytes(dataSize);
    reader.require(std::size_t(glyphCount) * 32);
    for (std::uint32_t i = 0; i < glyphCount; ++i) {
        FontGlyph glyph;
        glyph.code = reader.u16();
        for (auto& value : glyph.rectangle) value = reader.f32();
        for (auto& value : glyph.metrics) value = reader.i16();
        glyph.dataOffset = reader.u32();
        font.glyphs.push_back(glyph);
    }
    return font;
}

void readFonts(Reader& reader, SceneStructure& scene) {
    reader.version(1, "texture font container");
    const auto fonts = reader.count(27);
    const auto textures = reader.count(28);
    for (std::uint32_t i = 0; i < fonts; ++i) scene.fonts.push_back(readFont(reader));
    for (std::uint32_t i = 0; i < textures; ++i) {
        reader.version(3, "texture font");
        TextureFont font;
        font.file = fileReference(reader);
        const auto messages = reader.count(4);
        font.flag = reader.flag();
        font.fontIndex = reader.u32();
        for (std::uint32_t j = 0; j < messages; ++j) font.messages.push_back(reader.string16());
        font.countdown = reader.flag();
        for (auto& value : font.countdownFields) value = reader.u8();
        scene.textureFonts.push_back(std::move(font));
    }
}

void readModifiers(Reader& reader, SceneStructure& scene) {
    reader.version(8, "texture modifier");
    const auto count = reader.count(57);
    readTextureSwaps(reader, scene);
    readFonts(reader, scene);
    for (std::uint32_t i = 0; i < count; ++i) {
        TextureModifier modifier;
        for (auto& flag : modifier.flags) flag = reader.flag();
        for (auto& index : modifier.indices) index = reader.u32();
        modifier.phase = phase(reader);
        modifier.phaseFlag = reader.flag();
        for (auto& file : modifier.files) file = fileReference(reader);
        modifier.extraIndex = reader.u32();
        modifier.extraFlag = reader.flag();
        scene.modifiers.push_back(std::move(modifier));
    }
}
} // namespace

SceneStructure readSceneStructure(const Bytes& data) {
    if (data.size() > 64 * 1024 * 1024) throw std::runtime_error("scene exceeds input size limit");
    SceneStructure scene;
    scene.header = readSceneHeader(data);
    Reader reader(data, scene.header.payloadOffset);
    const char* section = "preferences";
    try {
        scene.preferences = readPreferences(reader);
        scene.environmentOffset = reader.offset();
        section = "environment";
        readEnvironment(reader, scene);
        scene.textureModifierOffset = reader.offset();
        section = "texture resources";
        readModifiers(reader, scene);
        scene.modelCountsOffset = reader.offset();
        section = "model counts";
        scene.modelCount = reader.u32();
        scene.matrixCount = reader.u32();
        scene.cameraCount = reader.u32();
        if (scene.modelCount > 65536 || scene.matrixCount > 65536 || scene.cameraCount > 4096)
            reader.fail("excessive model/matrix/camera count");
        scene.modelsOffset = reader.offset();
        section = "references";
        validateSceneReferences(scene);
    } catch (const std::runtime_error& error) {
        throw std::runtime_error(std::string("scene ") + section + ": " + error.what());
    }
    return scene;
}
} // namespace beach
