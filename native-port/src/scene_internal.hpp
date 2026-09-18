#pragma once
#include "beach/scene.hpp"
#include "reader.hpp"

namespace beach {
ScenePreferences readPreferences(Reader& reader);
void validateSceneReferences(const SceneStructure& scene);
} // namespace beach
