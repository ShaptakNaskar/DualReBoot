#include "beach/behavior.hpp"
#include "animation_internal.hpp"
#include <algorithm>

namespace beach {
namespace {
struct TableFormat { const char* name; std::uint32_t capacity, fields; bool camera; };
// Serialized order: the counts precede the tables and use a different order.
constexpr TableFormat formats[]{
    {"model position",3,1,false}, {"model rotation",3,1,false},
    {"camera position",3,1,true}, {"camera target",3,1,true},
    {"texture",4,3,false}, {"interact",4,1,false},
    {"visibility",1,1,false}, {"local time offset",1,1,false},
};
constexpr std::size_t tableCount = std::size_t(TrackTable::count);
static_assert(std::size(formats) == tableCount);
// GEScene::USerialize::Load reads the counts in this order, then the tables in
// declaration order. Both orders come from the same recovered function.
constexpr TrackTable countOrder[]{
    TrackTable::modelPosition, TrackTable::cameraPosition, TrackTable::texture,
    TrackTable::interact, TrackTable::visibility, TrackTable::modelRotation,
    TrackTable::cameraTarget, TrackTable::localTimeOffset,
};
static_assert(std::size(countOrder) == tableCount);

std::vector<TrackRecord> table(Reader& reader, TrackTable which, std::uint32_t count,
                               const SceneGeometry& scene) {
    const auto& format = formats[std::size_t(which)];
    const auto targets = format.camera ? scene.cameras.size() : scene.models.size();
    std::vector<TrackRecord> records;
    for (std::uint32_t i = 0; i < count; ++i) {
        TrackRecord record;
        record.offset = reader.offset();
        // A track is at least a version, default, curve count, range, driver and offset.
        const auto tracks = reader.count(41,format.capacity);
        record.target = reader.u32();
        if (record.target >= targets)
            reader.fail(std::string(format.name) + " animation names an unknown target");
        if (format.fields == 3) {
            record.surface = reader.u32();
            record.stage = reader.u32();
            // UpdateSimulation indexes the model's surfaces, then that surface's
            // two serialized texture layers, to find the matrix it animates.
            if (record.surface >= scene.models[record.target].surfaces.size() ||
                record.stage >= scene.models[record.target].surfaces[record.surface].material.layers.size())
                reader.fail("texture animation names an unknown surface or layer");
        }
        for (std::uint32_t j = 0; j < tracks; ++j) record.tracks.push_back(readAnimationTrack(reader));
        records.push_back(std::move(record));
    }
    return records;
}
} // namespace

const char* trackTableName(TrackTable which) {
    return formats[std::size_t(which) < tableCount ? std::size_t(which) : 0].name;
}
std::uint32_t trackTableCapacity(TrackTable which) {
    return formats[std::size_t(which) < tableCount ? std::size_t(which) : 0].capacity;
}

SceneTracks readSceneTracks(Reader& reader, const SceneGeometry& scene) {
    SceneTracks tracks;
    tracks.duration = reader.u64();
    std::array<std::uint32_t, tableCount> counts{};
    for (const auto which : countOrder) counts[std::size_t(which)] = reader.count(8);
    for (std::size_t i = 0; i < tableCount; ++i)
        tracks.tables[i] = table(reader,TrackTable(i),counts[i],scene);
    return tracks;
}

float evaluateTrack(const AnimationTrack& track, std::uint64_t tick) {
    if (track.curves.empty() || tick < track.start || tick >= track.end) return track.defaultValue;
    const auto interval = std::find_if(track.intervals.begin(),track.intervals.end(),
        [&](const auto& range) { return range.first <= tick && tick < range.second; });
    if (interval == track.intervals.end()) throw std::runtime_error("tick has no animation segment");
    const auto& curve = track.curves.at(std::size_t(interval-track.intervals.begin()));
    if (curve.times[3] <= curve.times[0]) throw std::runtime_error("invalid animation curve duration");
    const auto t = static_cast<float>(tick-interval->first) *
                   static_cast<float>(1.0/double(curve.times[3]-curve.times[0]));
    // GEAnimationTrack::Evaluate: a cubic Bezier over the curve's four values.
    const auto u = 1.0f-t;
    const auto value = u*u*(u*curve.values[0] + 3*t*curve.values[1]) +
                       t*t*(t*curve.values[3] + 3*u*curve.values[2]);
    if (!std::isfinite(value)) throw std::runtime_error("non-finite animation value");
    return value;
}
} // namespace beach
