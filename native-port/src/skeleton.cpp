#include "beach/behavior.hpp"
#include "animation_internal.hpp"
#include <algorithm>

namespace beach {
namespace {
constexpr std::uint32_t noParent = 0xffffffff;
constexpr std::uint32_t timeOfDayPhases = 8; // GETimeOfDay::GetTimeOfDay names eight phases.
constexpr std::uint32_t monthsPerYear = 12, daysPerMonth = 31, daysPerWeek = 7;

template<std::size_t N> std::array<float, N> floats(Reader& reader) {
    std::array<float, N> values{};
    for (auto& value : values) value = reader.f32();
    return values;
}
void again(Reader& reader, std::uint32_t declared, const char* section) {
    // Every skeleton record states its counts twice: once to size the arrays and
    // once immediately before the elements. Disagreement reallocates in the
    // original loader; this reader rejects it instead of guessing which wins.
    if (reader.u32() != declared) reader.fail(std::string(section) + " count disagrees with its header");
}
std::vector<AnimationTrack> channel(Reader& reader, std::uint32_t count) {
    // GESkeleton::BoneAnim::Initialize allocates exactly three tracks per channel.
    if (count && count != 3) reader.fail("bone channel must hold three tracks");
    std::vector<AnimationTrack> tracks;
    for (std::uint32_t i = 0; i < count; ++i) tracks.push_back(readAnimationTrack(reader));
    return tracks;
}
SkeletonAnimation skeletonAnimation(Reader& reader, std::uint32_t& bones) {
    reader.version(1,"skeleton animation");
    SkeletonAnimation animation;
    const auto boneCount = reader.count(136,256);
    animation.rootBoneCount = reader.u32();
    const auto animated = reader.count(16,256);
    if (!boneCount || !animation.rootBoneCount || animation.rootBoneCount > boneCount ||
        animated > boneCount || (bones && bones != boneCount))
        reader.fail("invalid skeleton bone counts");
    bones = boneCount;
    animation.root = floats<16>(reader);
    again(reader,animated,"skeleton bone animation");
    std::vector<bool> assigned(boneCount);
    for (std::uint32_t i = 0; i < animated; ++i) {
        BoneAnimation bone;
        reader.version(1,"bone animation");
        bone.bone = reader.u32();
        const auto positions = reader.u32();
        const auto rotations = reader.u32();
        if (bone.bone >= boneCount || assigned[bone.bone]) reader.fail("invalid or duplicate animated bone");
        assigned[bone.bone] = true;
        bone.position = channel(reader,positions);
        bone.rotation = channel(reader,rotations);
        animation.boneAnimations.push_back(std::move(bone));
    }
    for (auto* matrices : {&animation.inverseBind,&animation.local}) {
        again(reader,boneCount,"skeleton matrix");
        reader.require(std::size_t(boneCount)*64);
        for (std::uint32_t i = 0; i < boneCount; ++i) matrices->push_back(floats<16>(reader));
    }
    again(reader,boneCount,"skeleton update order");
    std::vector<bool> ordered(boneCount);
    for (std::uint32_t i = 0; i < boneCount; ++i) {
        const auto bone = reader.u32();
        if (bone >= boneCount || ordered[bone]) reader.fail("duplicate or invalid bone update order");
        ordered[bone] = true;
        animation.updateOrder.push_back(bone);
    }
    again(reader,boneCount,"skeleton parent");
    // GESkeleton::Animation::Update transforms the first rootBoneCount entries of
    // the update order by the root matrix, and the rest by an already-built parent.
    std::fill(ordered.begin(),ordered.end(),false);
    for (std::uint32_t i = 0; i < boneCount; ++i) {
        const auto parent = reader.u32();
        if (i < animation.rootBoneCount ? parent != noParent : (parent >= boneCount || !ordered[parent]))
            reader.fail("bone parent is not an earlier bone in update order");
        ordered[animation.updateOrder[i]] = true;
        animation.parents.push_back(parent);
    }
    return animation;
}
Skeleton skeletonMesh(Reader& reader, const Model& model) {
    Skeleton skeleton;
    reader.version(1,"skeleton mesh");
    const auto animations = reader.count(100,16);
    const auto groups = reader.count(24,4096);
    const auto vertices = reader.count(12,65536);
    if (!animations || !groups || !vertices) reader.fail("empty skeleton mesh");
    requirePackedPositions(model,vertices);
    again(reader,animations,"skeleton animation");
    std::uint32_t bones = 0;
    for (std::uint32_t i = 0; i < animations; ++i)
        skeleton.animations.push_back(skeletonAnimation(reader,bones));
    again(reader,groups,"skeleton vertex group");
    std::uint32_t covered = 0;
    for (std::uint32_t i = 0; i < groups; ++i) {
        SkinGroup group;
        reader.version(1,"skeleton vertex group");
        const auto boneCount = reader.count(4,3);
        group.firstVertex = reader.u32();
        group.vertexCount = reader.u32();
        if (!boneCount || group.firstVertex != covered || !group.vertexCount ||
            group.vertexCount > vertices-covered)
            reader.fail("skeleton vertex groups do not tile the mesh");
        covered += group.vertexCount;
        again(reader,boneCount,"skeleton vertex group bone");
        for (std::uint32_t j = 0; j < boneCount; ++j) {
            const auto bone = reader.u32();
            if (bone >= bones) reader.fail("skin group references an unknown bone");
            group.bones.push_back(bone);
        }
        skeleton.groups.push_back(std::move(group));
    }
    if (covered != vertices) reader.fail("skeleton vertex groups do not tile the mesh");
    // GESkeleton::Mesh::SetVertex keeps three weights; USerialize::Save writes three.
    if (reader.u32() != 3) reader.fail("unsupported skeleton weight count");
    reader.require(std::size_t(vertices)*24);
    for (std::uint32_t i = 0; i < vertices; ++i) {
        skeleton.positions.push_back(floats<3>(reader));
        skeleton.weights.push_back(floats<3>(reader));
    }
    return skeleton;
}
// "assigned" is null where the original tables allow a model to appear again.
std::uint32_t modelIndex(Reader& reader, std::size_t models, std::vector<bool>* assigned,
                         const char* section) {
    const auto index = reader.u32();
    if (index >= models) reader.fail(std::string(section) + " references an unknown model");
    if (assigned) {
        if ((*assigned)[index]) reader.fail(std::string(section) + " lists a model twice");
        (*assigned)[index] = true;
    }
    return index;
}
ModelMasks masks(Reader& reader, std::size_t models, std::uint32_t bits, const char* section) {
    ModelMasks entries;
    const auto count = reader.count(8);
    std::vector<bool> assigned(models);
    for (std::uint32_t i = 0; i < count; ++i) {
        const auto model = modelIndex(reader,models,&assigned,section);
        const auto mask = reader.u32();
        if (bits < 32 && mask >> bits) reader.fail(std::string(section) + " mask has unknown bits");
        entries.emplace_back(model,mask);
    }
    return entries;
}
std::vector<std::pair<std::uint32_t,std::uint32_t>> inherited(Reader& reader, std::size_t models,
                                                              const char* section) {
    std::vector<std::pair<std::uint32_t,std::uint32_t>> pairs;
    const auto count = reader.count(8);
    for (std::uint32_t i = 0; i < count; ++i) {
        const auto child = modelIndex(reader,models,nullptr,section);
        const auto parent = modelIndex(reader,models,nullptr,section);
        if (child == parent) reader.fail(std::string(section) + " inherits from itself");
        pairs.emplace_back(child,parent);
    }
    return pairs;
}
SceneVisibility sceneVisibility(Reader& reader, std::size_t models) {
    SceneVisibility visibility;
    const auto intersectables = reader.count(4);
    std::vector<bool> assigned(models);
    for (std::uint32_t i = 0; i < intersectables; ++i)
        visibility.intersectables.push_back(modelIndex(reader,models,&assigned,"intersectable"));
    visibility.inheritVisibility = inherited(reader,models,"inherited visibility");
    visibility.inheritIntersection = inherited(reader,models,"inherited intersection");
    visibility.timeOfDay = masks(reader,models,timeOfDayPhases,"time-of-day visibility");
    const auto weekDays = reader.count(5);
    assigned.assign(models,false);
    for (std::uint32_t i = 0; i < weekDays; ++i) {
        const auto model = modelIndex(reader,models,&assigned,"week-day visibility");
        const auto mask = reader.u8();
        if (mask >> daysPerWeek) reader.fail("week-day visibility mask has unknown bits");
        visibility.weekDay.emplace_back(model,mask);
    }
    const auto dates = reader.count(4+monthsPerYear*4);
    assigned.assign(models,false);
    for (std::uint32_t i = 0; i < dates; ++i) {
        DateVisibility entry;
        entry.model = modelIndex(reader,models,&assigned,"date visibility");
        for (auto& month : entry.months) {
            month = reader.u32();
            if (month >> daysPerMonth) reader.fail("date visibility mask has unknown bits");
        }
        visibility.date.push_back(entry);
    }
    visibility.environment = masks(reader,models,32,"environment visibility");
    return visibility;
}
} // namespace

SceneBehavior readSceneBehavior(const Bytes& data) {
    SceneBehavior scene;
    scene.animation = readSceneAnimation(data);
    const auto& models = scene.animation.geometry.models;
    scene.skeletonsOffset = scene.animation.remainingOffset;
    Reader reader(data,scene.skeletonsOffset);
    const auto skeletons = reader.count(28,4096);
    std::vector<bool> assigned(models.size());
    for (std::uint32_t i = 0; i < skeletons; ++i) {
        const auto offset = reader.offset();
        const auto index = modelIndex(reader,models.size(),&assigned,"skeleton");
        auto skeleton = skeletonMesh(reader,models[index]);
        skeleton.offset = offset;
        skeleton.modelIndex = index;
        scene.skeletons.push_back(std::move(skeleton));
    }
    scene.visibilityOffset = reader.offset();
    scene.visibility = sceneVisibility(reader,models.size());
    scene.tracksOffset = reader.offset();
    scene.tracks = readSceneTracks(reader,scene.animation.geometry);
    scene.logicOffset = reader.offset();
    // LLogicScene::Load reads a counted array of logic scenes. This scene stores
    // none, so no scripted behaviour has to be reconstructed to drive it.
    scene.logicScenes = reader.u32();
    if (scene.logicScenes) reader.fail("scripted logic scenes are not reconstructed");
    scene.remainingOffset = reader.offset();
    return scene;
}
} // namespace beach
