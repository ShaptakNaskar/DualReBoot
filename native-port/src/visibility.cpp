#include "beach/skeleton.hpp"
#include <stdexcept>

namespace beach {
std::vector<bool> computeShownModels(const SceneBehavior& scene, const SceneState& state,
                                     std::vector<bool> shown) {
    const auto& geometry = scene.animation.geometry;
    if (shown.size() != geometry.models.size())
        throw std::runtime_error("visibility base does not match the model count");
    if (state.timeOfDay > 7 || state.environment > 31 || state.month > 11 ||
        state.day < 1 || state.day > 31 || state.weekDay > 6)
        throw std::runtime_error("scene state outside the serialized visibility domain");
    const auto& visibility = scene.visibility;
    // GEScene::ComputeShownModelsList order: the active camera set first, then
    // each mask, then inheritance. Only inheritance depends on that order.
    if (state.cameraSet < geometry.cameraSets.size())
        for (const auto model : geometry.cameraSets[state.cameraSet].models) shown.at(model) = false;
    for (const auto& [model, mask] : visibility.timeOfDay)
        if (!(mask & 1u << state.timeOfDay)) shown.at(model) = false;
    for (const auto& [model, mask] : visibility.environment)
        if (!(mask & 1u << state.environment)) shown.at(model) = false;
    for (const auto& [model, mask] : visibility.weekDay)
        if (!(mask & 1u << state.weekDay)) shown.at(model) = false;
    for (const auto& entry : visibility.date)
        if (!(entry.months[state.month] & 1u << (state.day-1))) shown.at(entry.model) = false;
    for (const auto& [child, parent] : visibility.inheritVisibility)
        shown.at(child) = shown.at(child) && shown.at(parent);
    return shown;
}
} // namespace beach
