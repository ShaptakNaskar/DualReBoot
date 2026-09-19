#pragma once
#include "beach/behavior.hpp"
#include "reader.hpp"

namespace beach {
// GEAnimationTrack version 5, shared by vertex blenders and skeleton bones.
// Retains the raw driver and offset; no clock or trigger logic is executed.
AnimationTrack readAnimationTrack(Reader& reader);
// GEVertexBlender and GESkeleton::Mesh both animate a tightly packed float4
// position buffer in place.
void requirePackedPositions(const Model& model, std::uint32_t vertices);
// The eight scene-wide animation tables, read after the visibility masks.
SceneTracks readSceneTracks(Reader& reader, const SceneGeometry& scene);
} // namespace beach
