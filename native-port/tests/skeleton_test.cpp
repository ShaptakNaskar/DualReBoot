#include "beach/appearance.hpp"
#include "beach/behavior.hpp"
#include "animation_fixture.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <stdexcept>

namespace {
void check(bool value, const char* message) { if (!value) throw std::runtime_error(message); }
struct Fixture : AnimationFixture {
    void emptyTrack() { u32(5); f32(0); u32(0); u64(0); u64(0); u8(0); u32(12); u64(0); }
    void bezierTrack(float defaultValue, float a, float b, float c, float d) {
        u32(5); f32(defaultValue); u32(1);
        u64(start); u64(start+1000); u8(1); u32(3); u64(0);
        u32(2); for (auto delta : {0,250,750,1000}) u64(start+delta);
        for (float point : {a,b,c,d}) f32(point);
        u64(start); u64(start+1000);
    }
    void curveTrack(float value) {
        u32(5); f32(value); u32(1);
        u64(start); u64(start+1000); u8(1); u32(3); u64(0);
        u32(2); for (auto delta : {0,333,666,1000}) u64(start+delta);
        for (float point : {value,value,value,value*2}) f32(point);
        u64(start); u64(start+1000);
    }
    Fixture() {
        mark("skeleton_start"); u32(1);
        mark("skeleton_model"); u32(0);
        mark("mesh_version"); u32(1);
        mark("mesh_animations"); u32(1); mark("mesh_groups"); u32(2); mark("mesh_vertices"); u32(3);
        mark("mesh_animations_again"); u32(1);
        mark("animation_version"); u32(1);
        mark("bone_count"); u32(2); mark("root_bones"); u32(1); mark("bone_animations"); u32(2);
        matrix(); // Root transform applied to every root bone.
        u32(2);
        mark("bone_version"); u32(1); mark("bone_index"); u32(0);
        mark("position_tracks"); u32(3); u32(0);
        emptyTrack(); emptyTrack(); emptyTrack();
        u32(1); u32(1); u32(0); mark("rotation_tracks"); u32(3);
        curveTrack(0.25f); emptyTrack(); emptyTrack();
        mark("inverse_bind"); u32(2); matrix(); matrix(-1,0,0);
        mark("local_pose"); u32(2); matrix(); matrix(1,0,0);
        mark("order"); u32(2); mark("order_first"); u32(0); u32(1);
        mark("parents"); u32(2); mark("parents_first"); u32(0xffffffff); u32(0);
        mark("mesh_groups_again"); u32(2);
        mark("group_version"); u32(1); mark("group_bones"); u32(2);
        mark("group_first"); u32(0); u32(2); u32(2); mark("group_bone_index"); u32(0); u32(1);
        u32(1); u32(1); u32(2); u32(1); u32(1); u32(1);
        mark("weights"); u32(3);
        for (unsigned vertex = 0; vertex < 3; ++vertex) {
            f32(float(vertex)); f32(-float(vertex)); f32(1);
            f32(0.75f); f32(0.25f); f32(0);
        }
        mark("intersectables"); u32(1); mark("intersect_model"); u32(1);
        mark("inherit_visibility"); u32(1); mark("inherit_child"); u32(1); u32(0);
        mark("inherit_intersection"); u32(0);
        mark("time_of_day"); u32(1); mark("time_of_day_model"); u32(0); mark("time_of_day_mask"); u32(0x10);
        mark("week_day"); u32(1); u32(1); mark("week_day_mask"); u8(0x02);
        mark("date"); u32(1); u32(1);
        mark("date_months");
        for (unsigned month = 0; month < 12; ++month) u32(month == 5 ? 1u << 14 : 0);
        mark("environment"); u32(0);
        mark("tracks"); u64(12000000);
        // Counts precede the tables in their own order: model position, camera
        // position, texture, interact, visibility, model rotation, camera target
        // and local time offset.
        mark("count_model_position"); u32(1); u32(0); mark("count_texture"); u32(1);
        u32(0); mark("count_visibility"); u32(1); u32(1); u32(1); u32(0);
        mark("model_position"); u32(3); mark("position_target"); u32(0);
        bezierTrack(5,0,0,0,8); emptyTrack(); emptyTrack();
        mark("model_rotation"); u32(3); u32(1);
        emptyTrack(); emptyTrack(); emptyTrack();
        mark("camera_target"); u32(3); mark("camera_target_index"); u32(0);
        emptyTrack(); emptyTrack(); emptyTrack();
        mark("texture_tracks"); u32(4); mark("texture_model"); u32(0);
        mark("texture_surface"); u32(0); mark("texture_stage"); u32(0);
        emptyTrack(); emptyTrack(); emptyTrack(); emptyTrack();
        mark("visibility_tracks"); u32(1); u32(1); emptyTrack();
        mark("logic"); u32(0);
        mark("behavior_end");
    }
};
void rejects(const beach::Bytes& bytes) {
    try { beach::readSceneBehavior(bytes); } catch (const std::runtime_error&) { return; }
    throw std::runtime_error("accepted malformed skeleton or visibility data");
}
std::size_t shownCount(const std::vector<bool>& shown) {
    std::size_t count = 0;
    for (const auto value : shown) count += value;
    return count;
}
void unitTests() {
    using namespace beach;
    const Fixture fixture;
    auto scene = readSceneBehavior(fixture.bytes);
    check(scene.skeletonsOffset == fixture.offsets.at("skeleton_start") &&
          scene.visibilityOffset == fixture.offsets.at("intersectables") &&
          scene.tracksOffset == fixture.offsets.at("tracks") &&
          scene.logicOffset == fixture.offsets.at("logic") &&
          scene.remainingOffset == fixture.offsets.at("behavior_end"), "section boundaries");
    check(scene.skeletons.size() == 1 && scene.skeletons[0].modelIndex == 0 &&
          scene.skeletons[0].offset == fixture.offsets.at("skeleton_model"), "skeleton model reference");
    const auto& skeleton = scene.skeletons[0];
    const auto& animation = skeleton.animations.at(0);
    check(animation.local.size() == 2 && animation.inverseBind.size() == 2 &&
          animation.rootBoneCount == 1, "bone matrices and root count");
    check(animation.local[1][12] == 1 && animation.inverseBind[1][12] == -1, "local pose and inverse bind are distinct");
    check(animation.updateOrder == std::vector<std::uint32_t>{0,1} &&
          animation.parents == std::vector<std::uint32_t>{0xffffffff,0}, "update order and parents");
    check(animation.boneAnimations.size() == 2 &&
          animation.boneAnimations[0].position.size() == 3 && animation.boneAnimations[0].rotation.empty() &&
          animation.boneAnimations[1].position.empty() && animation.boneAnimations[1].rotation.size() == 3,
          "bone position and rotation channels");
    check(animation.boneAnimations[0].position[0].curves.empty() &&
          animation.boneAnimations[0].position[0].driver == 12, "an unanimated channel stores no curves");
    const auto& curved = animation.boneAnimations[1].rotation[0];
    check(curved.curves.size() == 1 && curved.start == AnimationFixture::start &&
          curved.end == AnimationFixture::start+1000 && curved.driver == 3 && curved.driverOverride,
          "bone tracks reuse the 64-bit vertex-track reader");
    check(skeleton.groups.size() == 2 && skeleton.groups[0].bones == std::vector<std::uint32_t>{0,1} &&
          skeleton.groups[1].firstVertex == 2 && skeleton.groups[1].vertexCount == 1,
          "vertex groups tile the mesh");
    check(skeleton.positions.size() == 3 && skeleton.weights.size() == 3 &&
          skeleton.positions[2][0] == 2 && skeleton.weights[0][0] == 0.75f, "skinned positions and weights");
    const auto& visibility = scene.visibility;
    check(visibility.intersectables == std::vector<std::uint32_t>{1} &&
          visibility.inheritVisibility.at(0) == std::make_pair(1u,0u) &&
          visibility.inheritIntersection.empty() && visibility.environment.empty(),
          "intersection and inheritance tables");
    check(visibility.timeOfDay.at(0) == std::make_pair(0u,0x10u) &&
          visibility.weekDay.at(0) == std::make_pair(1u,std::uint8_t(2)) &&
          visibility.date.at(0).months[5] == 1u << 14, "serialized visibility masks");

    const auto& tables = scene.tracks.tables;
    const auto sized = [&](TrackTable which) { return tables[std::size_t(which)].size(); };
    check(scene.tracks.duration == 12000000 && scene.logicScenes == 0, "scene duration and empty logic array");
    check(sized(TrackTable::modelPosition) == 1 && sized(TrackTable::modelRotation) == 1 &&
          sized(TrackTable::cameraPosition) == 0 && sized(TrackTable::cameraTarget) == 1 &&
          sized(TrackTable::texture) == 1 && sized(TrackTable::interact) == 0 &&
          sized(TrackTable::visibility) == 1 && sized(TrackTable::localTimeOffset) == 0,
          "counts are matched to their own tables");
    const auto& texture = tables[std::size_t(TrackTable::texture)].at(0);
    check(texture.tracks.size() == 4 && texture.target == 0 && texture.surface == 0 && texture.stage == 0 &&
          texture.offset == fixture.offsets.at("texture_tracks"), "texture record names a surface and layer");
    const auto& position = tables[std::size_t(TrackTable::modelPosition)].at(0);
    check(position.target == 0 && position.tracks.size() == 3, "model position record");
    const auto& bezier = position.tracks.at(0);
    // Cubic Bezier over the four value points: 1/8, 3/8, 3/8, 1/8 at the midpoint.
    check(evaluateTrack(bezier,AnimationFixture::start-1) == 5 &&
          evaluateTrack(bezier,AnimationFixture::start+1000) == 5, "outside the track the default applies");
    check(evaluateTrack(bezier,AnimationFixture::start) == 0 &&
          std::abs(evaluateTrack(bezier,AnimationFixture::start+500)-1) < 1e-6f &&
          evaluateTrack(bezier,AnimationFixture::start+999) > 3, "Bezier value at the segment fraction");
    check(evaluateTrack(position.tracks.at(1),AnimationFixture::start) == 0,
          "a track with no curves stays at its default");

    const std::vector<bool> base(2,true);
    SceneState state; state.timeOfDay = 4; state.month = 5; state.day = 15; state.weekDay = 1;
    check(computeShownModels(scene,state,base) == std::vector<bool>{true,true}, "matching state shows both models");
    auto other = state; other.timeOfDay = 3;
    check(shownCount(computeShownModels(scene,other,base)) == 0, "a hidden parent hides its child");
    other = state; other.weekDay = 0;
    check(computeShownModels(scene,other,base) == std::vector<bool>{true,false}, "week-day mask");
    other = state; other.day = 16;
    check(computeShownModels(scene,other,base) == std::vector<bool>{true,false}, "date mask");
    other = state; other.day = 15; other.month = 4;
    check(computeShownModels(scene,other,base) == std::vector<bool>{true,false}, "month selects its own mask");
    check(computeShownModels(scene,state,std::vector<bool>{false,true}) == std::vector<bool>{false,false},
          "preference-hidden models stay hidden and still hide children");
    scene.animation.geometry.cameraSets.at(0).models.push_back(0);
    check(shownCount(computeShownModels(scene,state,base)) == 0, "the active camera set hides its models");
    state.cameraSet = 9;
    check(shownCount(computeShownModels(scene,state,base)) == 2, "an out-of-range camera set is ignored");
    for (const auto& [field, value] : std::vector<std::pair<std::string,std::uint32_t>>{
             {"timeOfDay",8},{"environment",32},{"month",12},{"day",0},{"day",32},{"weekDay",7}}) {
        auto invalid = state;
        if (field == "timeOfDay") invalid.timeOfDay = value;
        if (field == "environment") invalid.environment = value;
        if (field == "month") invalid.month = value;
        if (field == "day") invalid.day = value;
        if (field == "weekDay") invalid.weekDay = value;
        bool rejected = false;
        try { computeShownModels(scene,invalid,base); } catch (const std::runtime_error&) { rejected = true; }
        check(rejected,"scene state outside the serialized domain is rejected");
    }
    bool rejected = false;
    try { computeShownModels(scene,state,std::vector<bool>(3,true)); }
    catch (const std::runtime_error&) { rejected = true; }
    check(rejected,"visibility base must match the model count");

    for (std::size_t end = fixture.offsets.at("skeleton_start"); end < scene.remainingOffset; ++end)
        rejects(Bytes(fixture.bytes.begin(),fixture.bytes.begin()+end));
    for (const auto& [field, value] : std::vector<std::pair<std::string,std::uint32_t>>{
             {"skeleton_start",2},{"skeleton_model",2},{"mesh_version",2},{"mesh_animations",2},
             {"mesh_groups",3},{"mesh_vertices",4},{"mesh_animations_again",2},{"animation_version",2},
             {"bone_count",3},{"root_bones",0},{"root_bones",3},{"bone_animations",3},{"bone_index",2},
             {"bone_index",1},{"position_tracks",2},{"rotation_tracks",4},{"inverse_bind",1},{"local_pose",3},
             {"order",1},{"order_first",1},{"parents",1},{"parents_first",0},{"mesh_groups_again",1},
             {"group_version",2},{"group_bones",4},{"group_first",1},{"group_bone_index",2},{"weights",4},
             {"intersectables",2},{"intersect_model",2},{"inherit_child",0},{"time_of_day_model",2},
             {"time_of_day_mask",0x100},{"week_day_mask",0x80},{"date_months",0x80000000},
             {"count_model_position",2},{"count_texture",2},{"count_visibility",2},
             {"model_position",4},{"position_target",2},{"model_rotation",0},
             {"camera_target_index",1},{"texture_tracks",5},{"texture_model",2},
             {"texture_surface",1},{"texture_stage",1},{"visibility_tracks",2},{"logic",1}}) {
        auto bytes = fixture.bytes;
        set32(bytes,fixture.offsets.at(field),value);
        rejects(bytes);
    }
}
void original(const std::filesystem::path& assets) {
    using namespace beach;
    const auto data = readFile(assets/"beach.stg-scene");
    const auto scene = readSceneBehavior(data);
    check(scene.skeletonsOffset == 445981 && scene.visibilityOffset == 534692 &&
          scene.tracksOffset == 537888 && scene.logicOffset == 759888 &&
          scene.remainingOffset == data.size(),
          "original boundaries from an independent serializer trace");
    check(scene.skeletons.size() == 3, "original skeleton count");
    std::size_t tracks = 0, curves = 0;
    for (const auto& skeleton : scene.skeletons) {
        const auto& animation = skeleton.animations.at(0);
        check(skeleton.animations.size() == 1 && animation.local.size() == 7 && animation.rootBoneCount == 1 &&
              animation.parents == std::vector<std::uint32_t>{0xffffffff,0,0,0,0,3,4}, "seagull bone hierarchy");
        check(skeleton.positions.size() == 171 && skeleton.groups.size() == 7, "seagull mesh dimensions");
        std::uint32_t skinned = 0;
        for (const auto& group : skeleton.groups) skinned += group.vertexCount;
        check(skinned == 171, "vertex groups cover every skinned vertex");
        // The inverse bind matrices are pure translations, and each one negates the
        // joint offsets summed along its parent chain. Only the root bone carries
        // position tracks, so the bind pose leaves it at the origin. This confirms
        // the parent chain and the order Transform4x3 composes the two arrays in.
        std::vector<Vector3> offset(animation.local.size());
        for (std::uint32_t bone = 0; bone < animation.local.size(); ++bone) {
            const auto parent = animation.parents[bone];
            const auto animated = !animation.boneAnimations.at(bone).position.empty();
            for (unsigned axis = 0; axis < 3; ++axis) {
                offset[bone][axis] = animated ? 0 : animation.local[bone][12+axis];
                if (parent != 0xffffffff) offset[bone][axis] += offset[parent][axis];
                check(std::abs(animation.inverseBind[bone][12+axis]+offset[bone][axis]) < 1e-4f,
                      "inverse bind negates the accumulated joint offset");
            }
            for (unsigned element = 0; element < 12; ++element)
                check(std::abs(animation.inverseBind[bone][element]-(element%5 ? 0.f : 1.f)) < 1e-4f,
                      "inverse bind carries no rotation or scale");
        }
        for (const auto& bone : animation.boneAnimations)
            for (const auto* channel : {&bone.position,&bone.rotation})
                for (const auto& track : *channel) { ++tracks; curves += track.curves.size(); }
    }
    check(scene.skeletons[0].modelIndex == 31 && scene.skeletons[2].modelIndex == 33 &&
          scene.animation.geometry.models[31].name == "0001r_Seagull", "skinned models are the three seagulls");
    check(tracks == 63 && curves == 1023, "bone track and curve totals");
    const auto& visibility = scene.visibility;
    check(visibility.intersectables.size() == 9 && visibility.inheritVisibility.size() == 13 &&
          visibility.inheritIntersection.size() == 9 && visibility.timeOfDay.size() == 103 &&
          visibility.weekDay.empty() && visibility.date.size() == 41 && visibility.environment.empty(),
          "original visibility table sizes");
    const auto& models = scene.animation.geometry.models;
    const auto masked = [&](const ModelMasks& table, const std::string& name) {
        for (const auto& [model, mask] : table) if (models[model].name == name) return mask;
        throw std::runtime_error("no mask for " + name);
    };
    // 01c_Sun is authored for noon alone; 01d_Moon for midnight alone.
    check(masked(visibility.timeOfDay,"01c_Sun") == 1u << 4 &&
          masked(visibility.timeOfDay,"01d_Moon") == 1u << 0 &&
          masked(visibility.timeOfDay,"01a_Sunset_001") == 1u << 6, "phase order recovered from the masks");
    const auto dates = [&](const std::string& name) {
        for (const auto& entry : visibility.date) if (models[entry.model].name == name) return entry.months;
        throw std::runtime_error("no date mask for " + name);
    };
    // December 24-25 and July 4 are the only days these models are authored for.
    check(dates("0001e_Umbrella_Day_Xmas")[11] == (1u << 23 | 1u << 24) &&
          dates("0001r_Plane002_Holiday")[6] == 1u << 3, "date masks are month arrays of day bits");

    // ComputeShownModelsList starts from the hidden flag ApplyPreferences writes,
    // so every serialized flag must be one a toggle or swap preference re-decides.
    std::vector<bool> referenced(models.size());
    for (const auto& group : scene.animation.geometry.structure.preferences.groups)
        for (const auto& preference : group) {
            if (const auto* toggle = std::get_if<ModelTogglePreference>(&preference.data))
                for (const auto model : toggle->modelIndices) referenced.at(model) = true;
            if (const auto* swap = std::get_if<ModelSwapPreference>(&preference.data))
                for (const auto& choice : swap->choices)
                    for (const auto model : choice.modelIndices) referenced.at(model) = true;
        }
    std::size_t hidden = 0;
    for (std::size_t i = 0; i < models.size(); ++i)
        if (models[i].flag9D) { ++hidden; check(referenced[i],"a hidden model no preference re-decides"); }
    check(hidden == 48 && shownCount(referenced) == 139, "serialized hidden flags and preference coverage");
    const auto base = defaultAppearance(scene.animation.geometry).visible;
    check(shownCount(base) == 134, "preference-driven visibility");
    SceneState state; state.month = 5; state.day = 15;
    std::vector<std::size_t> perPhase;
    for (std::uint32_t phase = 0; phase < 8; ++phase) {
        state.timeOfDay = phase;
        const auto shown = computeShownModels(scene,state,base);
        perPhase.push_back(shownCount(shown));
        const auto visible = [&](const std::string& name) {
            for (std::size_t i = 0; i < models.size(); ++i) if (models[i].name == name) return bool(shown[i]);
            throw std::runtime_error("no model named " + name);
        };
        check(visible("01c_Sun") == (phase == 4) && visible("01d_Moon") == (phase == 0) &&
              visible("0001x_Sky_Day") != visible("0001x_Sky_Night"), "day and night models never show together");
    }
    check(perPhase == std::vector<std::size_t>{74,73,61,62,65,62,62,73}, "models shown per phase");
    state.timeOfDay = 0; state.month = 11; state.day = 25;
    const auto christmas = computeShownModels(scene,state,base);
    state.day = 15;
    const auto ordinary = computeShownModels(scene,state,base);
    const auto festive = [&](const std::vector<bool>& shown, const std::string& name) {
        for (std::size_t i = 0; i < models.size(); ++i) if (models[i].name == name) return bool(shown[i]);
        throw std::runtime_error("no model named " + name);
    };
    check(festive(christmas,"0001e_Umbrella_Day_Xmas") && !festive(ordinary,"0001e_Umbrella_Day_Xmas") &&
          !festive(christmas,"0001e_Umbrella_Night") && festive(ordinary,"0001e_Umbrella_Night"),
          "December 25 swaps the umbrella");
    // Every table, then the empty logic-scene array, consuming the whole file.
    check(scene.tracks.duration == 12000000 && scene.logicScenes == 0,
          "scene duration and empty logic-scene array");
    const auto& tables = scene.tracks.tables;
    std::vector<std::size_t> sizes, trackCounts;
    std::size_t tableCurves = 0;
    for (const auto& records : tables) {
        sizes.push_back(records.size());
        std::size_t counted = 0;
        for (const auto& record : records) {
            check(record.tracks.size() == trackTableCapacity(TrackTable(&records-tables.data())),
                  "original records fill their table's track capacity");
            counted += record.tracks.size();
            for (const auto& track : record.tracks) {
                tableCurves += track.curves.size();
                // Each segment boundary evaluates to that curve's first value.
                for (std::size_t i = 0; i < track.curves.size(); ++i)
                    check(evaluateTrack(track,track.intervals[i].first) == track.curves[i].values[0],
                          "segment start evaluates to the curve's first control value");
                check(!track.curves.empty() || evaluateTrack(track,0) == track.defaultValue,
                      "an empty track always returns its default");
            }
        }
        trackCounts.push_back(counted);
    }
    check(sizes == std::vector<std::size_t>{50,42,0,2,68,0,50,0}, "original table record counts");
    check(trackCounts == std::vector<std::size_t>{150,126,0,6,272,0,50,0} && tableCurves == 2867,
          "original track and curve totals");
    std::vector<std::size_t> perModel(models.size());
    for (const auto& record : tables[std::size_t(TrackTable::texture)]) {
        check(record.stage < 2 && record.surface == 0, "texture records name a layer of the first surface");
        ++perModel[record.target];
    }
    check(std::count(perModel.begin(),perModel.end(),std::size_t(2)) == 7,
          "seven models animate both texture layers");
    const auto named = [&](TrackTable which, const std::string& name) -> const TrackRecord& {
        for (const auto& record : tables[std::size_t(which)])
            if (models[record.target].name == name) return record;
        throw std::runtime_error("no " + std::string(trackTableName(which)) + " track for " + name);
    };
    // The shark fin surfaces late in a long cycle and travels while it is up.
    const auto& shark = named(TrackTable::modelPosition,"0001q_SharkFin").tracks.at(0);
    check(shark.start == 180000000 && shark.end == 192000000 && shark.driver == 3 && shark.driverOverride,
          "shark fin position track window");
    check(evaluateTrack(shark,shark.start-1) == shark.defaultValue &&
          evaluateTrack(shark,shark.start) == shark.defaultValue &&
          evaluateTrack(shark,(shark.start+shark.end)/2) > shark.defaultValue+50,
          "the fin only moves inside its window");
    std::cout << "Original behaviour: 3 skeletons, 21 bones, 1023 bone curves; "
              << "212 animation records, " << tableCurves << " curves\n"
              << "Decoded the whole " << data.size() << "-byte scene; models shown at noon: "
              << perPhase[4] << " of " << shownCount(base) << " enabled by preferences\n";
}
} // namespace
int main(int argc, char** argv) {
    try {
        if (argc == 1) unitTests();
        else if (argc == 2) original(argv[1]);
        else throw std::runtime_error("unexpected skeleton test arguments");
        std::cout << "PASS\n";
    } catch (const std::exception& error) { std::cerr << "FAIL: " << error.what() << '\n'; return 1; }
}
