#pragma once
#include "beach/geometry.hpp"

namespace beach {
struct AnimationCurve {
    std::array<std::uint64_t, 4> times{};
    std::array<float, 4> values{};
};
struct AnimationTrack {
    float defaultValue = 0;
    std::uint64_t start = 0, end = 0, timeOffset = 0;
    bool driverOverride = false;
    std::uint32_t driver = 0;
    std::vector<AnimationCurve> curves;
    std::vector<std::pair<std::uint64_t, std::uint64_t>> intervals;
};
struct VertexAnimation {
    std::uint32_t modelIndex = 0, vertexCount = 0;
    AnimationTrack track;
    std::vector<std::vector<std::array<float, 4>>> frames;
};
struct SceneAnimation {
    SceneGeometry geometry;
    std::vector<VertexAnimation> vertexAnimations;
    std::size_t remainingOffset = 0;
};

// First animation checkpoint: stops before skeletons and later scene logic.
SceneAnimation readSceneAnimation(const Bytes& data);

// Sample one parsed animation at an ALREADY RESOLVED track tick. Start-inclusive,
// end-exclusive. Changes only XYZ; preserves destination W and returns false
// outside the track. Does not implement driver clocks, wrapping or trigger logic.
bool sampleVertexAnimation(const VertexAnimation& animation, std::uint64_t tick, Model& model);
} // namespace beach
