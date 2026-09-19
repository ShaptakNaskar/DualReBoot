#include "beach/appearance.hpp"
#include <algorithm>
#include <stdexcept>

namespace beach {
StaticAppearance defaultAppearance(const SceneGeometry& scene, std::uint32_t timeOfDay) {
    const auto& groups = scene.structure.preferences.groups;
    StaticAppearance result;
    // GEScene::ComputeShownModelsList starts from each model's hidden flag;
    // ApplyPreferences overwrites it for every model a preference references.
    result.visible.reserve(scene.models.size());
    for (const auto& model : scene.models) result.visible.push_back(!model.flag9D);
    std::map<std::string, std::string> settings;
    const auto& themes = groups[static_cast<std::size_t>(PreferenceKind::theme)];
    if (!themes.empty())
        for (const auto& [key, value] : std::get<ThemePreference>(themes.front().data).settings)
            settings[key] = value;
    std::vector<std::size_t> choices(scene.structure.textureSwaps.size());
    for (std::size_t i = 0; i < choices.size(); ++i) {
        const auto& swap = scene.structure.textureSwaps[i];
        if (swap.choices.empty()) throw std::runtime_error("empty texture swap: " + swap.name);
        if (swap.flags[0]) {
            const auto match = std::find_if(swap.choices.begin(), swap.choices.end(),
                [&](const TextureChoice& choice) { return choice.phase == timeOfDay; });
            if (match != swap.choices.end()) choices[i] = match - swap.choices.begin();
        }
    }
    for (const auto& group : groups) for (const auto& pref : group) {
        const auto setting = settings.find(pref.key);
        if (const auto* toggle = std::get_if<ModelTogglePreference>(&pref.data)) {
            if (setting != settings.end() && setting->second != "true" && setting->second != "false")
                throw std::runtime_error("invalid theme toggle: " + pref.key);
            const auto enabled = setting == settings.end() ? toggle->enabled : setting->second == "true";
            for (auto index : toggle->modelIndices) result.visible.at(index) = enabled;
        } else if (const auto* swap = std::get_if<ModelSwapPreference>(&pref.data)) {
            for (const auto& choice : swap->choices)
                for (auto index : choice.modelIndices) result.visible.at(index) = false;
            if (!swap->choices.empty()) {
                const auto match = std::find_if(swap->choices.begin(), swap->choices.end(),
                    [&](const ModelChoice& choice) { return setting != settings.end() && choice.name == setting->second; });
                if (setting != settings.end() && match == swap->choices.end())
                    throw std::runtime_error("unknown theme model option: " + pref.key);
                const auto& selected = match == swap->choices.end() ? swap->choices.front() : *match;
                for (auto index : selected.modelIndices) result.visible.at(index) = true;
            }
        } else if (const auto* textureGroup = std::get_if<TextureGroupPreference>(&pref.data)) {
            if (setting == settings.end()) continue;
            const auto option = std::find(textureGroup->options.begin(), textureGroup->options.end(), setting->second);
            if (option == textureGroup->options.end()) throw std::runtime_error("unknown theme option: " + pref.key);
            const auto selected = static_cast<std::size_t>(option - textureGroup->options.begin());
            for (auto child : textureGroup->childSwapPreferences) {
                const auto& childPref = groups[static_cast<std::size_t>(PreferenceKind::textureSwap)].at(child);
                const auto index = std::get<TextureSwapPreference>(childPref.data).swapIndex;
                choices.at(index) = selected;
            }
        }
    }
    for (std::size_t i = 0; i < choices.size(); ++i) {
        const auto& swap = scene.structure.textureSwaps[i];
        result.textures["swap/" + swap.name] = swap.choices.at(choices[i]).file.name;
    }
    return result;
}
} // namespace beach
