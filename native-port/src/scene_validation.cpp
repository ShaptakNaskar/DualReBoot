#include "scene_internal.hpp"

namespace beach {
namespace {
void indexIn(std::uint32_t index, std::size_t size, const std::string& context) {
    if (index >= size)
        throw std::runtime_error(context + ": index " + std::to_string(index) + " out of range");
}
} // namespace

void validateSceneReferences(const SceneStructure& scene) {
    const auto& groups = scene.preferences.groups;
    for (const auto& group : groups) for (const auto& pref : group) {
        const auto context = "preference " + pref.key + " at byte " + std::to_string(pref.offset);
        if (const auto* swap = std::get_if<TextureSwapPreference>(&pref.data)) {
            indexIn(swap->swapIndex, scene.textureSwaps.size(), context);
        } else if (const auto* toggle = std::get_if<ModelTogglePreference>(&pref.data)) {
            for (auto index : toggle->modelIndices) indexIn(index, scene.modelCount, context);
        } else if (const auto* font = std::get_if<TextureFontPreference>(&pref.data)) {
            indexIn(font->textureFontIndex, scene.textureFonts.size(), context);
        } else if (const auto* textureGroup = std::get_if<TextureGroupPreference>(&pref.data)) {
            for (auto index : textureGroup->childSwapPreferences)
                indexIn(index, groups[static_cast<std::size_t>(PreferenceKind::textureSwap)].size(), context);
        } else if (const auto* modelSwap = std::get_if<ModelSwapPreference>(&pref.data)) {
            for (const auto& choice : modelSwap->choices)
                for (auto index : choice.modelIndices) indexIn(index, scene.modelCount, context);
        }
    }
    for (const auto& font : scene.textureFonts)
        indexIn(font.fontIndex, scene.fonts.size(), "texture font " + font.file.name);
    for (const auto& modifier : scene.modifiers) {
        const auto context = "texture modifier " + modifier.files[0].name;
        if (modifier.flags[0]) {
            indexIn(modifier.indices[0], scene.textureSwaps.size(), context);
            indexIn(modifier.indices[1], scene.textureSwaps[modifier.indices[0]].choices.size(), context);
        }
        if (modifier.flags[1]) indexIn(modifier.indices[2], scene.textureFonts.size(), context);
    }
}
} // namespace beach
