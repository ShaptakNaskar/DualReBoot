#pragma once
#include "beach/geometry.hpp"
#include <map>

namespace beach {
struct StaticAppearance {
    std::vector<bool> visible;
    std::map<std::string, std::string> textures;
};
// Apply the serialized hidden flags, toggle defaults and the first theme, then
// the texture swaps authored for one time-of-day phase. This is GEScene::
// ApplyPreferences only; masks, animation and effects are evaluated elsewhere.
StaticAppearance defaultAppearance(const SceneGeometry& scene, std::uint32_t timeOfDay = 4);
} // namespace beach
