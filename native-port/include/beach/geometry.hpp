#pragma once
#include "beach/scene.hpp"

namespace beach {
using Matrix = std::array<float, 16>; // Column-major, as serialized and consumed by GL.
using Vector3 = std::array<float, 3>;
struct VertexComponent {
    std::uint32_t usage = 0, type = 0, width = 0, offset = 0;
};
struct VertexBuffer {
    std::vector<VertexComponent> components;
    std::uint32_t usage = 0, count = 0, stride = 0;
    Bytes data;
};
struct TextureLayer {
    std::uint32_t sampler = 0, stage = 0, anisotropy = 0;
    std::array<float, 4> color{};
    FileReference file;
    std::array<std::uint32_t, 2> fields{};
    Matrix transform{};
};
struct Material {
    std::uint32_t blend = 0, cull = 0, depth = 0;
    std::array<float, 4> color{};
    std::vector<TextureLayer> layers;
};
struct Surface { std::vector<std::uint16_t> indices; Material material; };
struct Model {
    std::size_t offset = 0;
    std::uint32_t vertexCount = 0;
    std::vector<VertexBuffer> buffers;
    std::vector<Surface> surfaces;
    std::array<Vector3, 3> bounds{};
    float radius = 0;
    bool billboard = false, followsCamera = false;
    float cameraFactor = 0;
    bool flagA5 = false, customDepth = false;
    std::array<float, 2> depthRange{};
    bool clipPositionEnabled = false;
    Vector3 clipPosition{};
    bool flagC1 = false;
    std::array<float, 4> color{};
    float opacity = 0;
    bool flag9D = false;
    std::string name;
    std::array<bool, 2> trailingFlags{};
};
struct Camera {
    std::uint32_t kind = 0;
    Vector3 eye{}, target{}, up{};
    float fovDegrees = 0, aspect = 0, nearPlane = 0, farPlane = 0, aspectAdjustment = 0;
    bool adjustFov = false;
};
struct CameraSet {
    std::string name;
    std::vector<std::uint32_t> cameras, models;
    std::uint32_t field = 0;
};
struct SceneGeometry {
    SceneStructure structure;
    std::vector<Model> models;
    std::vector<Matrix> matrices;
    std::vector<Camera> cameras;
    std::vector<CameraSet> cameraSets;
    std::uint32_t rootCount = 0;
    std::vector<std::pair<std::uint32_t, std::uint32_t>> transformOrder;
    std::size_t matricesOffset = 0, camerasOffset = 0, remainingOffset = 0;
};
// Through camera sets and parent transform order. Animation and logic follow.
SceneGeometry readSceneGeometry(const Bytes& data);
Matrix multiply(const Matrix& left, const Matrix& right);
Matrix viewMatrix(const Camera& camera);
Matrix projectionMatrix(const Camera& camera, float aspect);
std::vector<Matrix> renderTransforms(const SceneGeometry& scene, const Camera& camera);
} // namespace beach
