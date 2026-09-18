#pragma once

#include "beach/assets.hpp"
#include <array>
#include <variant>

namespace beach {

using StringPairs = std::vector<std::pair<std::string, std::string>>;
enum class PreferenceKind : std::size_t {
    timeOfDay, camera, textureSwap, modelToggle, textureFont, textureGroup,
    fileChooser, theme, modelSwap, purchase, environment, count
};
const char* preferenceKindName(PreferenceKind kind);

struct TimeOfDayPreference { std::vector<std::uint32_t> phases; };
struct CameraPreference { std::vector<std::string> options; };
struct TextureSwapPreference { std::uint32_t swapIndex; std::vector<std::string> options; };
struct ModelTogglePreference { bool enabled; std::vector<std::uint32_t> modelIndices; };
struct TextureFontPreference { std::uint32_t textureFontIndex; bool flag; };
struct TextureGroupPreference {
    std::vector<std::uint32_t> childSwapPreferences;
    std::vector<std::string> options;
};
struct FileChooserPreference { std::array<std::uint32_t, 2> fields; std::uint32_t trailingField = 0; };
struct ThemePreference { StringPairs settings; };
struct ModelChoice { std::string name; std::vector<std::uint32_t> modelIndices; };
struct ModelSwapPreference { std::uint32_t capacity; std::vector<ModelChoice> choices; };
// Retained as serialized data only; no entitlement checks or unlock logic run.
struct PurchasePreference { std::string extraText; StringPairs settings; };
struct EnvironmentPreference { std::vector<std::string> options; };
using PreferenceData = std::variant<TimeOfDayPreference, CameraPreference, TextureSwapPreference,
    ModelTogglePreference, TextureFontPreference, TextureGroupPreference, FileChooserPreference,
    ThemePreference, ModelSwapPreference, PurchasePreference, EnvironmentPreference>;
struct Preference {
    std::size_t offset = 0;
    std::string key, name, description;
    PreferenceData data;
};
struct ScenePreferences {
    // Initial allocation counts, in wire order, independently followed by actual counts.
    std::array<std::uint32_t, 11> allocationCounts{};
    std::array<std::vector<Preference>, 11> groups;
    StringPairs multiPreferences;
};

struct EnvironmentSettings {
    // Preserve slot order; the renderer's interpretation is a later milestone.
    std::array<std::array<float, 4>, 3> colors{};
    std::array<float, 2> range{};
    std::array<bool, 2> flags{};
};
struct FileReference { std::string name; std::uint32_t hash; };
struct TextureChoice {
    std::string name;
    FileReference file;
    std::uint32_t phase = 0;
    std::uint32_t extraIndex = 0;
};
struct TextureSwap {
    std::string name;
    std::array<bool, 2> flags{};
    std::vector<TextureChoice> choices;
};
struct FontGlyph {
    std::uint16_t code = 0;
    std::array<float, 4> rectangle{};
    std::array<std::int16_t, 5> metrics{};
    std::uint32_t dataOffset = 0;
};
struct EmbeddedFont {
    FileReference file;
    float size = 0;
    bool flag = false;
    // Original embedded data is retained, not interpreted/rasterized or exported.
    Bytes data;
    std::vector<FontGlyph> glyphs;
};
struct TextureFont {
    FileReference file;
    bool flag = false;
    std::uint32_t fontIndex = 0;
    std::vector<std::u16string> messages;
    bool countdown = false;
    std::array<std::uint8_t, 2> countdownFields{};
};
struct TextureModifier {
    std::array<bool, 3> flags{};
    // Words at original STextureInfo offsets 4,8,12,16. Their values are
    // swap index, choice index, texture-font index, and an unreconstructed field.
    std::array<std::uint32_t, 4> indices{};
    std::uint32_t phase = 0;
    bool phaseFlag = false;
    std::array<FileReference, 2> files;
    std::uint32_t extraIndex = 0;
    bool extraFlag = false;
};
struct SceneStructure {
    SceneHeader header;
    ScenePreferences preferences;
    std::vector<std::vector<EnvironmentSettings>> environments;
    std::vector<TextureSwap> textureSwaps;
    std::vector<EmbeddedFont> fonts;
    std::vector<TextureFont> textureFonts;
    std::vector<TextureModifier> modifiers;
    std::size_t environmentOffset = 0, textureModifierOffset = 0, modelCountsOffset = 0;
    std::size_t modelsOffset = 0;
    std::uint32_t modelCount = 0, matrixCount = 0, cameraCount = 0;
};

// Parses the v26 prefix through the three model/matrix/camera counts.
// Does not decode model records, evaluate preferences or simulate the scene.
SceneStructure readSceneStructure(const Bytes& data);

} // namespace beach
