#include "beach/scene.hpp"
#include "scene_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
void check(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
void rejects(const beach::Bytes& bytes, const std::string& context) {
    try { beach::readSceneStructure(bytes); }
    catch (const std::runtime_error&) { return; }
    throw std::runtime_error("accepted malformed scene: " + context);
}
void set32(beach::Bytes& bytes, std::size_t at, std::uint32_t value) {
    for (unsigned i = 0; i < 4; ++i) bytes.at(at + i) = (value >> (i * 8)) & 255;
}
template<class T> const T& preference(const beach::SceneStructure& scene, beach::PreferenceKind kind) {
    return std::get<T>(scene.preferences.groups.at(static_cast<std::size_t>(kind)).at(0).data);
}

void unitTests() {
    using namespace beach;
    const SceneFixture fixture;
    const auto scene = readSceneStructure(fixture.bytes);
    check(scene.header.payloadOffset == fixture.offsets.at("preferences"), "metadata boundary");
    check(scene.environmentOffset == fixture.offsets.at("environment"), "environment boundary");
    check(scene.textureModifierOffset == fixture.offsets.at("texture_modifier"), "resource boundary");
    check(scene.modelCountsOffset == fixture.offsets.at("model_counts") &&
          scene.modelsOffset == fixture.offsets.at("models"), "model boundary");
    check(scene.modelCount == 2 && scene.matrixCount == 2 && scene.cameraCount == 1, "model counts");
    for (const auto& group : scene.preferences.groups) check(group.size() == 1, "all preference kinds");
    check(preference<TimeOfDayPreference>(scene, PreferenceKind::timeOfDay).phases ==
              std::vector<std::uint32_t>{0, 7}, "phase list");
    check(preference<CameraPreference>(scene, PreferenceKind::camera).options[0] == "Camera", "camera option");
    check(preference<TextureSwapPreference>(scene, PreferenceKind::textureSwap).options[1] == "Night", "swap options");
    check(preference<ModelTogglePreference>(scene, PreferenceKind::modelToggle).enabled, "toggle default");
    check(preference<TextureFontPreference>(scene, PreferenceKind::textureFont).flag, "text preference flag");
    check(preference<TextureGroupPreference>(scene, PreferenceKind::textureGroup).childSwapPreferences ==
              std::vector<std::uint32_t>{0}, "texture group links");
    const auto& chooser = preference<FileChooserPreference>(scene, PreferenceKind::fileChooser);
    check(chooser.fields == std::array<std::uint32_t, 2>{0, 3} && chooser.trailingField == 19,
          "file chooser fields and deferred trailer");
    check(preference<ThemePreference>(scene, PreferenceKind::theme).settings ==
              StringPairs{{"key_TGRP", "Night"}}, "theme pairs stay ordered");
    const auto& swap = preference<ModelSwapPreference>(scene, PreferenceKind::modelSwap);
    check(swap.capacity == 1 && swap.choices[0].modelIndices.empty() &&
          swap.choices[1].modelIndices == std::vector<std::uint32_t>{1}, "nested model choices");
    check(preference<PurchasePreference>(scene, PreferenceKind::purchase).extraText == "preserve-only",
          "purchase data is retained");
    check(preference<EnvironmentPreference>(scene, PreferenceKind::environment).options[0] == "Default",
          "environment option");
    check(scene.preferences.multiPreferences == StringPairs{{"multi-key", "multi-value"}}, "multi-preference pairs");
    const auto& environment = scene.environments.at(0).at(1);
    check(environment.colors[0][0] == 0.0625f && environment.range == std::array<float, 2>{-2, 2} &&
          environment.flags == std::array<bool, 2>{true, false}, "environment values");
    check(scene.textureSwaps[0].choices[1].file.hash == 0x87654321 &&
          scene.textureSwaps[0].choices[1].phase == 1, "swap file and phase");
    const auto& font = scene.fonts.at(0);
    check(font.size == 24 && font.data == Bytes({11, 22, 33, 44}) && font.file.hash == 0xffffffff,
          "embedded font data");
    const auto& glyph = font.glyphs.at(0);
    check(glyph.code == 65 && glyph.rectangle == std::array<float, 4>{0.25f, 0.5f, 0.75f, 1} &&
          glyph.metrics == std::array<std::int16_t, 5>{-3, -12, 5, 15, 4} && glyph.dataOffset == 2,
          "glyph signed metrics and rectangle");
    check(scene.textureFonts[0].messages == std::vector<std::u16string>{u"Hello", u"Beach \U0001f30a"} &&
          scene.textureFonts[0].countdown && scene.textureFonts[0].countdownFields[1] == 4,
          "UTF-16 code units and countdown data");
    check(scene.modifiers[0].indices == std::array<std::uint32_t, 4>{0, 1, 0, 0xffffffff} &&
          scene.modifiers[0].files[0].name == "swap/Sky", "modifier fields and sentinel");

    for (std::size_t size = 0; size < scene.modelsOffset; ++size)
        rejects(Bytes(fixture.bytes.begin(), fixture.bytes.begin() + size), "truncated prefix");
    // The body is explicitly outside this API's contract, even if absent.
    const Bytes prefix(fixture.bytes.begin(), fixture.bytes.begin() + scene.modelsOffset);
    check(readSceneStructure(prefix).modelsOffset == prefix.size(), "prefix-only input");

    for (const auto& name : {"preferences", "environment", "texture_modifier", "swap_container",
                             "font_container", "font", "texture_font"}) {
        auto bytes = fixture.bytes;
        set32(bytes, fixture.offsets.at(name), 99);
        rejects(bytes, std::string("unknown version: ") + name);
    }
    for (const auto& name : {"allocation_counts", "first_group_count", "font_data_size", "utf16_count"}) {
        auto bytes = fixture.bytes;
        set32(bytes, fixture.offsets.at(name), 0xffffffff);
        rejects(bytes, std::string("excessive size: ") + name);
    }
    for (const auto& [word, value] : std::array<std::pair<unsigned, std::uint32_t>, 3>{
             {{0, 65537}, {1, 65537}, {2, 4097}}}) {
        auto bytes = fixture.bytes;
        set32(bytes, fixture.offsets.at("model_counts") + word * 4, value);
        rejects(bytes, "excessive model/matrix/camera count");
    }
    for (const auto& name : {"swap_index", "model_index", "group_child", "font_index", "modifier_choice", "phase_value"}) {
        auto bytes = fixture.bytes;
        set32(bytes, fixture.offsets.at(name), 12345);
        rejects(bytes, std::string("invalid reference/phase: ") + name);
    }
    auto bytes = fixture.bytes;
    bytes[fixture.offsets.at("toggle_flag")] = 2;
    rejects(bytes, "invalid boolean");
    bytes = fixture.bytes;
    bytes[fixture.offsets.at("first_group_count") + 4] = 'X';
    rejects(bytes, "invalid preference tag");
    for (auto value : {0x7f800000u, 0x7fc00000u}) {
        bytes = fixture.bytes;
        set32(bytes, fixture.offsets.at("environment_float"), value);
        rejects(bytes, "non-finite environment float");
    }

    // Changing a variable-length field moves all later boundaries naturally.
    bytes = fixture.bytes;
    bytes.insert(bytes.begin() + 15, 9, 'x'); // Extend first metadata key.
    set32(bytes, 8, 16);
    check(readSceneStructure(bytes).modelsOffset == scene.modelsOffset + 9,
          "section offsets are parsed, never hardcoded");
}

void originalScene(const std::filesystem::path& assets) {
    using namespace beach;
    const auto bytes = readFile(assets / "beach.stg-scene");
    const auto scene = readSceneStructure(bytes);
    const std::array<std::size_t, 11> counts{1, 1, 8, 24, 5, 7, 0, 6, 3, 1, 1};
    for (std::size_t i = 0; i < counts.size(); ++i)
        check(scene.preferences.groups[i].size() == counts[i], "original preference counts");
    check(scene.preferences.groups[0][0].key == "timeofday_time_of_day", "original preference key");
    check(scene.environmentOffset == 17076 && scene.textureModifierOffset == 17588 &&
          scene.modelCountsOffset == 100053 && scene.modelsOffset == 100065,
          "original section offsets independently traced from serializers");
    check(scene.modelCount == 167 && scene.matrixCount == 167 && scene.cameraCount == 2,
          "original model/matrix/camera counts");
    check(scene.environments.size() == 1 && scene.environments[0].size() == 8 &&
          scene.environments[0][4].colors[0] == std::array<float, 4>{1, 1, 1, 1}, "noon environment");
    check(scene.textureSwaps.size() == 8 && scene.textureSwaps[0].choices[0].file.name == "/tex/sky__hq.pvr",
          "original sky resource");
    check(scene.fonts.size() == 2 && scene.fonts[0].data.size() == 23390 && scene.fonts[1].data.size() == 34259 &&
          scene.fonts[0].glyphs.size() == 188 && scene.fonts[1].glyphs.size() == 319, "original fonts");
    check(scene.fonts[0].glyphs[1].code == 33 && scene.fonts[0].glyphs[1].metrics[1] == -14,
          "original signed glyph metric");
    check(scene.textureFonts.size() == 5 && scene.textureFonts[4].messages[1] == u"PRIVATE BEACH\u00a0",
          "original UTF-16 message retains nonbreaking space");
    check(scene.modifiers.size() == 48 && scene.modifiers.back().files[1].name == "/tex/umbrella_teal.pvr",
          "last original texture modifier");
    for (const auto& swap : scene.textureSwaps) for (const auto& choice : swap.choices) {
        check(choice.file.name.rfind("/tex/", 0) == 0, "expected original texture prefix");
        check(std::filesystem::is_regular_file(assets / choice.file.name.substr(1)), "original referenced texture exists");
    }
    for (auto offset : {std::size_t(78), scene.environmentOffset, scene.textureModifierOffset,
                       std::size_t(20528), std::size_t(49961), std::size_t(94455),
                       scene.modelCountsOffset, scene.modelsOffset})
        rejects(Bytes(bytes.begin(), bytes.begin() + offset - 1), "original section truncation");
    std::cout << "Original scene: 57 preferences, 8 environment phases, 48 modifiers; models at byte "
              << scene.modelsOffset << '\n';
}
} // namespace

int main(int argc, char** argv) {
    try {
        if (argc == 1) unitTests();
        else if (argc == 2) originalScene(argv[1]);
        else throw std::runtime_error("unexpected scene test arguments");
        std::cout << "PASS\n";
    } catch (const std::exception& error) {
        std::cerr << "FAIL: " << error.what() << '\n';
        return 1;
    }
}
