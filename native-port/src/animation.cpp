#include "animation_internal.hpp"
#include <algorithm>
#include <cstring>

namespace beach {
namespace {
AnimationTrack readVertexTrack(Reader& reader, std::uint32_t frames) {
    auto track = readAnimationTrack(reader);
    if (track.curves.size() != std::size_t(frames)-1)
        reader.fail("vertex track must have one segment per frame pair");
    return track;
}
} // namespace

void requirePackedPositions(const Model& model, std::uint32_t vertices) {
    if (model.buffers.empty()) throw std::runtime_error("animated model has no vertex buffer");
    const auto& buffer = model.buffers.front();
    if (buffer.count != vertices || buffer.stride != 16 || buffer.components.size() != 1 ||
        buffer.components[0].usage != 0 || buffer.components[0].type != 0 ||
        buffer.components[0].width != 4 || buffer.components[0].offset != 0 ||
        buffer.data.size() != std::uint64_t(vertices)*16)
        throw std::runtime_error("unsupported animated position-buffer layout");
}

AnimationTrack readAnimationTrack(Reader& reader) {
    reader.version(5,"animation track");
    AnimationTrack track;
    track.defaultValue = reader.f32();
    const auto count = reader.count(68,4095);
    track.start = reader.u64(); track.end = reader.u64();
    track.driverOverride = reader.flag(); track.driver = reader.u32(); track.timeOffset = reader.u64();
    // A bone channel that never moves stores no curves and an empty range;
    // GEAnimationTrack::Evaluate returns the default value for it.
    if (track.driver > 12 || (count ? track.start >= track.end : track.start || track.end))
        reader.fail("invalid animation track range/driver");
    for (std::uint32_t i = 0; i < count; ++i) {
        reader.version(2,"animation curve");
        AnimationCurve curve;
        for (auto& time : curve.times) time = reader.u64();
        for (auto& value : curve.values) value = reader.f32();
        if (!std::is_sorted(curve.times.begin(),curve.times.end()) || curve.times.front() == curve.times.back())
            reader.fail("invalid animation curve times");
        track.curves.push_back(curve);
    }
    auto expectedStart = track.start;
    for (std::uint32_t i = 0; i < count; ++i) {
        const auto start = reader.u64();
        const auto end = reader.u64();
        // This is the observed exported subset. Retain both the curve and the
        // explicit v5 interval table, and reject other remappings.
        if (start != expectedStart || start != track.curves[i].times.front() ||
            end != track.curves[i].times.back() || end > track.end)
            reader.fail("unsupported animation-track interval mapping");
        track.intervals.emplace_back(start,end);
        expectedStart = end;
    }
    if (expectedStart != track.end) reader.fail("incomplete animation-track interval coverage");
    return track;
}

SceneAnimation readSceneAnimation(const Bytes& data) {
    SceneAnimation scene;
    scene.geometry = readSceneGeometry(data);
    Reader reader(data,scene.geometry.remainingOffset);
    const auto count = reader.count(65,4096);
    std::vector<bool> assigned(scene.geometry.models.size());
    for (std::uint32_t i = 0; i < count; ++i) {
        VertexAnimation animation;
        animation.modelIndex = reader.u32();
        if (animation.modelIndex >= assigned.size() || assigned[animation.modelIndex])
            reader.fail("invalid or duplicate vertex-animation model");
        assigned[animation.modelIndex] = true;
        reader.version(3,"vertex blender");
        const auto frames = reader.count(16,4096);
        if (frames < 2) reader.fail("vertex animation needs at least two frames");
        animation.vertexCount = reader.count(16);
        if (!animation.vertexCount) reader.fail("vertex animation has no vertices");
        requirePackedPositions(scene.geometry.models[animation.modelIndex],animation.vertexCount);
        animation.track = readVertexTrack(reader,frames);
        const auto bytes = std::uint64_t(frames)*animation.vertexCount*16;
        if (bytes > reader.remaining()) reader.fail("truncated animation frames");
        for (std::uint32_t frame = 0; frame < frames; ++frame) {
            std::vector<std::array<float,4>> positions;
            positions.reserve(animation.vertexCount);
            for (std::uint32_t vertex = 0; vertex < animation.vertexCount; ++vertex) {
                std::array<float,4> position{};
                for (auto& component : position) component = reader.f32();
                positions.push_back(position);
            }
            animation.frames.push_back(std::move(positions));
        }
        scene.vertexAnimations.push_back(std::move(animation));
    }
    scene.remainingOffset = reader.offset();
    return scene;
}

bool sampleVertexAnimation(const VertexAnimation& animation, std::uint64_t tick, Model& model) {
    const auto& track = animation.track;
    if (tick < track.start || tick >= track.end) return false;
    const auto interval = std::find_if(track.intervals.begin(),track.intervals.end(),
        [&](const auto& range) { return range.first <= tick && tick < range.second; });
    if (interval == track.intervals.end()) throw std::runtime_error("tick has no vertex-animation segment");
    const auto segment = static_cast<std::size_t>(interval-track.intervals.begin());
    requirePackedPositions(model,animation.vertexCount);
    const auto& first = animation.frames.at(segment);
    const auto& second = animation.frames.at(segment+1);
    if (first.size() != animation.vertexCount || second.size() != animation.vertexCount)
        throw std::runtime_error("vertex animation frame size mismatch");
    const auto& curve = track.curves.at(segment);
    if (curve.times[3] <= curve.times[0]) throw std::runtime_error("invalid vertex-animation duration");
    const auto weight = static_cast<float>(tick-interval->first) *
                        static_cast<float>(1.0/double(curve.times[3]-curve.times[0]));
    auto bytes = model.buffers.front().data;
    for (std::size_t vertex = 0; vertex < animation.vertexCount; ++vertex)
        for (std::size_t axis = 0; axis < 3; ++axis) {
            // GEVertexBlender selects adjacent frames from the interval index;
            // this path does not evaluate the Bezier value control points.
            const float value = first[vertex][axis] + (second[vertex][axis]-first[vertex][axis])*weight;
            if (!std::isfinite(value)) throw std::runtime_error("non-finite sampled vertex");
            std::uint32_t bits; std::memcpy(&bits,&value,4);
            for (unsigned byte = 0; byte < 4; ++byte)
                bytes[vertex*16+axis*4+byte] = (bits >> (byte*8)) & 255;
        }
    model.buffers.front().data = std::move(bytes);
    return true;
}
} // namespace beach
