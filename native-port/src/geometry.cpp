#include "beach/geometry.hpp"
#include "reader.hpp"
#include <algorithm>

namespace beach {
namespace {
template<std::size_t N> std::array<float, N> floats(Reader& reader) {
    std::array<float, N> values{};
    for (auto& value : values) value = reader.f32();
    return values;
}
VertexBuffer vertexBuffer(Reader& reader) {
    reader.version(2, "vertex buffer");
    VertexBuffer buffer;
    const auto count = reader.count(12, 7);
    std::array<bool, 7> usages{};
    std::uint32_t stride = 0;
    for (std::uint32_t i = 0; i < count; ++i) {
        VertexComponent component;
        component.usage = reader.u32();
        component.type = reader.u32();
        component.width = reader.u32();
        if (component.usage > 6 || usages[component.usage] || component.type > 1 ||
            !component.width || component.width > 4)
            reader.fail("unsupported vertex component");
        usages[component.usage] = true;
        component.offset = stride;
        stride += component.width * (component.type == 0 ? 4 : 1);
        buffer.components.push_back(component);
    }
    buffer.usage = reader.u32();
    buffer.count = reader.count(1, 65536);
    buffer.stride = reader.u32();
    if (!stride || buffer.stride != stride) reader.fail("vertex stride disagrees with components");
    buffer.data = reader.bytes(std::size_t(buffer.count) * stride);
    // Reject NaNs before the data can reach a graphics driver, without imposing
    // alignment/host-endianness assumptions on interleaved packed components.
    for (std::uint32_t vertex = 0; vertex < buffer.count; ++vertex)
        for (const auto& component : buffer.components) if (component.type == 0) {
            Reader values(buffer.data, std::size_t(vertex) * stride + component.offset);
            for (std::uint32_t n = 0; n < component.width; ++n) values.f32();
        }
    return buffer;
}
Material material(Reader& reader) {
    reader.version(6, "material");
    Material result;
    result.blend = reader.u32(); result.cull = reader.u32(); result.depth = reader.u32();
    if (result.blend > 5 || result.cull > 1 || result.depth > 3) reader.fail("unsupported material state");
    result.color = floats<4>(reader);
    const auto count = reader.count(112, 2);
    for (std::uint32_t i = 0; i < count; ++i) {
        TextureLayer layer;
        layer.sampler = reader.u32(); layer.stage = reader.u32(); layer.anisotropy = reader.u32();
        if (layer.sampler > 7 || layer.stage > 5 || layer.anisotropy > 4)
            reader.fail("unsupported texture state");
        layer.color = floats<4>(reader);
        reader.version(1, "material file reference");
        layer.file.name = reader.string(); layer.file.hash = reader.u32();
        for (auto& field : layer.fields) field = reader.u32();
        layer.transform = floats<16>(reader);
        result.layers.push_back(std::move(layer));
    }
    return result;
}
Model model(Reader& reader) {
    Model result;
    result.offset = reader.offset();
    reader.version(16, "model");
    const auto surfaces = reader.count(8, 4096);
    result.vertexCount = reader.u32();
    if (!result.vertexCount || result.vertexCount > 65536) reader.fail("invalid model vertex count");
    const auto buffers = reader.count(16, 7);
    std::array<bool, 7> components{};
    for (std::uint32_t i = 0; i < buffers; ++i) {
        auto buffer = vertexBuffer(reader);
        if (buffer.count != result.vertexCount) reader.fail("inconsistent vertex-buffer count");
        for (const auto& component : buffer.components) {
            if (components[component.usage]) reader.fail("duplicate model vertex component");
            components[component.usage] = true;
        }
        result.buffers.push_back(std::move(buffer));
    }
    if (!components[0]) reader.fail("model has no position component");
    for (std::uint32_t i = 0; i < surfaces; ++i) {
        reader.version(1, "index buffer");
        // GEIndexBuffer::Allocate expands a TRIANGLE count to three u16 indices.
        const auto triangles = reader.count(6, 65536);
        Surface surface;
        surface.indices.reserve(std::size_t(triangles) * 3);
        for (std::size_t j = 0; j < std::size_t(triangles) * 3; ++j) {
            const auto index = reader.u16();
            if (index >= result.vertexCount) reader.fail("mesh index exceeds vertex count");
            surface.indices.push_back(index);
        }
        surface.material = material(reader);
        result.surfaces.push_back(std::move(surface));
    }
    for (auto& bound : result.bounds) bound = floats<3>(reader);
    result.radius = reader.f32();
    result.billboard = reader.flag(); result.followsCamera = reader.flag();
    result.cameraFactor = reader.f32(); result.flagA5 = reader.flag();
    result.customDepth = reader.flag(); result.depthRange = floats<2>(reader);
    result.clipPositionEnabled = reader.flag(); result.clipPosition = floats<3>(reader);
    result.flagC1 = reader.flag(); result.color = floats<4>(reader);
    result.opacity = reader.f32(); result.flag9D = reader.flag(); result.name = reader.string();
    for (auto& flag : result.trailingFlags) flag = reader.flag();
    return result;
}
Camera camera(Reader& reader) {
    reader.version(2, "camera");
    Camera result;
    result.kind = reader.u32();
    result.eye = floats<3>(reader); result.target = floats<3>(reader); result.up = floats<3>(reader);
    result.fovDegrees = reader.f32(); result.aspect = reader.f32();
    result.nearPlane = reader.f32(); result.farPlane = reader.f32();
    result.aspectAdjustment = reader.f32(); result.adjustFov = reader.flag();
    if (result.kind != 1 || result.fovDegrees <= 0 || result.fovDegrees >= 179 ||
        result.aspect <= 0 || result.nearPlane <= 0 || result.farPlane <= result.nearPlane)
        reader.fail("unsupported or invalid perspective camera");
    viewMatrix(result); // Check degenerate eye/target/up before rendering.
    return result;
}
} // namespace

SceneGeometry readSceneGeometry(const Bytes& data) {
    SceneGeometry scene;
    scene.structure = readSceneStructure(data);
    Reader reader(data, scene.structure.modelsOffset);
    for (std::uint32_t i = 0; i < scene.structure.modelCount; ++i) {
        try { scene.models.push_back(model(reader)); }
        catch (const std::runtime_error& error) {
            throw std::runtime_error("model " + std::to_string(i) + ": " + error.what());
        }
    }
    scene.matricesOffset = reader.offset();
    reader.require(std::size_t(scene.structure.matrixCount) * 64);
    for (std::uint32_t i = 0; i < scene.structure.matrixCount; ++i)
        scene.matrices.push_back(floats<16>(reader));
    scene.camerasOffset = reader.offset();
    reader.require(std::size_t(scene.structure.cameraCount) * 65);
    for (std::uint32_t i = 0; i < scene.structure.cameraCount; ++i)
        scene.cameras.push_back(camera(reader));
    const auto sets = reader.count(20, 4096);
    for (std::uint32_t i = 0; i < sets; ++i) {
        reader.version(1, "camera set");
        CameraSet set;
        set.name = reader.string();
        const auto cameras = reader.count(4, 4096);
        const auto models = reader.count(4);
        set.field = reader.u32();
        for (std::uint32_t j = 0; j < cameras; ++j) {
            const auto index = reader.u32();
            if (index >= scene.cameras.size()) reader.fail("camera-set index out of range");
            set.cameras.push_back(index);
        }
        for (std::uint32_t j = 0; j < models; ++j) {
            const auto index = reader.u32();
            if (index >= scene.models.size()) reader.fail("camera-set model out of range");
            set.models.push_back(index);
        }
        scene.cameraSets.push_back(std::move(set));
    }
    scene.rootCount = reader.u32();
    if (scene.rootCount > scene.matrices.size() || scene.models.size() != scene.matrices.size())
        reader.fail("unsupported model/matrix hierarchy dimensions");
    reader.require(scene.matrices.size() * 8);
    std::vector<bool> seen(scene.models.size());
    for (std::size_t i = 0; i < scene.matrices.size(); ++i) {
        const auto index = reader.u32();
        const auto parent = reader.u32();
        if (index >= seen.size() || seen[index]) reader.fail("duplicate or invalid transform index");
        if (i < scene.rootCount) {
            if (parent != 0xffffffff) reader.fail("root transform has a parent");
        } else if (parent >= seen.size() || !seen[parent]) reader.fail("transform parent is not earlier in order");
        seen[index] = true;
        scene.transformOrder.emplace_back(index,parent);
    }
    scene.remainingOffset = reader.offset();
    return scene;
}
} // namespace beach
