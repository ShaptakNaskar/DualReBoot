#pragma once
#include "beach/geometry.hpp"
#include <map>

namespace beach {
struct StaticAppearance {
    std::vector<bool> visible;
    std::map<std::string, std::string> textures;
};
// Apply serialized toggle defaults and the first theme, with phase 4 (noon).
// Animation-driven visibility, hierarchy and procedural effects are not evaluated.
StaticAppearance defaultAppearance(const SceneGeometry& scene);
} // namespace beach
