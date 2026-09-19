#pragma once
#include "beach/animation.hpp"

namespace beach {
// GESkeleton::BoneAnim. Either channel is absent or holds three tracks:
// position x/y/z, or the Euler angles GESkeleton::Animation feeds SetEulerXZY.
struct BoneAnimation {
    std::uint32_t bone = 0;
    std::vector<AnimationTrack> position, rotation;
};
struct SkeletonAnimation {
    Matrix root{};
    std::uint32_t rootBoneCount = 0;
    std::vector<BoneAnimation> boneAnimations;
    // Per bone, in bone order. GESkeleton::Animation::Update overwrites "local"
    // from the evaluated tracks, builds each world matrix from the root matrix or
    // the parent, and right-multiplies it by "inverseBind" to skin the mesh.
    std::vector<Matrix> inverseBind, local;
    std::vector<std::uint32_t> updateOrder, parents; // 0xffffffff marks a root bone.
};
// A contiguous run of vertices skinned by up to three bones.
struct SkinGroup {
    std::uint32_t firstVertex = 0, vertexCount = 0;
    std::vector<std::uint32_t> bones;
};
struct Skeleton {
    std::size_t offset = 0;
    std::uint32_t modelIndex = 0;
    std::vector<SkeletonAnimation> animations;
    std::vector<SkinGroup> groups;
    std::vector<Vector3> positions;
    std::vector<std::array<float, 3>> weights;
};
struct DateVisibility {
    std::uint32_t model = 0;
    std::array<std::uint32_t, 12> months{}; // One mask per month; bit (day - 1).
};
using ModelMasks = std::vector<std::pair<std::uint32_t, std::uint32_t>>;
struct SceneVisibility {
    std::vector<std::uint32_t> intersectables;
    // Applied in file order: the child stays shown only while the parent is.
    std::vector<std::pair<std::uint32_t, std::uint32_t>> inheritVisibility, inheritIntersection;
    ModelMasks timeOfDay, environment;
    std::vector<std::pair<std::uint32_t, std::uint8_t>> weekDay;
    std::vector<DateVisibility> date;
};
struct SceneBehavior {
    SceneAnimation animation;
    std::vector<Skeleton> skeletons;
    SceneVisibility visibility;
    std::size_t skeletonsOffset = 0, visibilityOffset = 0, remainingOffset = 0;
};

// Continues past the vertex animations through the visibility tables. Stops
// before the scene's animation-track, logic and camera-set sections.
SceneBehavior readSceneBehavior(const Bytes& data);

// Deterministic inputs. Nothing here reads a system clock, timezone or location.
struct SceneState {
    // Midnight 0, Night 1, Dawn 2, Morning 3, Noon 4, Afternoon 5, Dusk 6, Evening 7.
    std::uint32_t timeOfDay = 4;
    std::uint32_t environment = 0;
    std::uint32_t month = 0;  // 0-11.
    std::uint32_t day = 1;    // 1-31.
    std::uint32_t weekDay = 0;// 0-6.
    std::uint32_t cameraSet = 0;
};
// GEScene::ComputeShownModelsList. Takes the preference-driven hidden flags as
// the starting point, then applies the active camera set, the four serialized
// masks and inherited visibility. Animation, logic and effects are not evaluated.
std::vector<bool> computeShownModels(const SceneBehavior& scene, const SceneState& state,
                                     std::vector<bool> shown);
} // namespace beach
