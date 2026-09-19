#include "beach/appearance.hpp"
#include "geometry_fixture.hpp"
#include <cmath>
#include <fstream>
#include <iostream>
#include <stdexcept>

namespace {
void check(bool condition, const char* message) { if (!condition) throw std::runtime_error(message); }
void rejects(const beach::Bytes& bytes) {
    try { beach::readSceneGeometry(bytes); } catch (const std::runtime_error&) { return; }
    throw std::runtime_error("accepted malformed geometry");
}
void unitTests() {
    using namespace beach;
    const GeometryFixture fixture;
    auto scene = readSceneGeometry(fixture.bytes);
    check(scene.models.size() == 2 && scene.models[0].name == "Triangle", "models decoded");
    check(scene.models[0].buffers[0].count == 3 && scene.models[0].buffers[0].stride == 12, "vertex layout");
    check(scene.models[0].surfaces[0].indices == std::vector<std::uint16_t>{0,1,2}, "triangle count expands to three indices");
    check(scene.matricesOffset == fixture.offsets.at("geometry_matrices") &&
          scene.camerasOffset == fixture.offsets.at("geometry_camera") &&
          scene.remainingOffset == fixture.offsets.at("geometry_end"), "geometry boundaries");
    check(scene.rootCount == 1 && scene.transformOrder[1] == std::make_pair(1u,0u), "parent order");
    check(scene.cameraSets[0].cameras == std::vector<std::uint32_t>{0}, "camera group reference");
    const auto appearance = defaultAppearance(scene);
    check(appearance.visible[0] && !appearance.visible[1] &&
          appearance.textures.at("swap/Sky") == "/tex/night.pvr", "static theme and group selection");
    const auto view = viewMatrix(scene.cameras[0]);
    check(view[0] == 1 && view[5] == 1 && view[10] == 1 && view[14] == -5, "look-at view translation");
    const auto projection = projectionMatrix(scene.cameras[0],2);
    check(std::abs(projection[0]*2-projection[5]) < 1e-6f && projection[11] == -1,
          "perspective aspect and homogeneous divide");
    for (const float distance : {1.f,100.f}) {
        const auto depth = (-distance*projection[10]+projection[14])/distance;
        check(std::abs(depth-(distance == 1 ? -1.f : 1.f)) < 1e-5f, "near/far planes map to clip depth");
    }
    scene.matrices[0][12] = 3;
    const auto transforms = renderTransforms(scene,scene.cameras[0]);
    check(transforms[1][12] == 5, "child inherits parent translation");
    scene.models[0].followsCamera = true; scene.models[0].cameraFactor = 0.5f;
    check(renderTransforms(scene,scene.cameras[0])[1][14] == 2.5f, "camera-relative parent inherited by child");
    // Independently prove rotation/translation multiplication order.
    Matrix rotation{0,1,0,0, -1,0,0,0, 0,0,1,0, 0,0,0,1};
    Matrix translation{1,0,0,0, 0,1,0,0, 0,0,1,0, 2,0,0,1};
    check(multiply(rotation,translation)[13] == 2, "column-major parent rotation");
    for (std::size_t cut = fixture.offsets.at("models"); cut < scene.remainingOffset; ++cut)
        rejects(Bytes(fixture.bytes.begin(),fixture.bytes.begin()+cut));
    for (const auto& [field, value] : std::vector<std::pair<std::string,std::uint32_t>>{
             {"geometry_model",17}, {"geometry_component",7}, {"geometry_stride",16},
             {"geometry_vertex",0x7fc00000}, {"geometry_triangle_count",0xffffffff},
             {"geometry_material",7}, {"geometry_fov",0}, {"geometry_roots",3}, {"geometry_parent",1}}) {
        auto bytes = fixture.bytes; set32(bytes,fixture.offsets.at(field),value); rejects(bytes);
    }
    auto bytes = fixture.bytes; bytes[fixture.offsets.at("geometry_index")] = 3; rejects(bytes);
    bytes = fixture.bytes; set32(bytes,fixture.offsets.at("geometry_model")+8,0); rejects(bytes);
}
void original(const std::filesystem::path& assets) {
    const auto bytes = beach::readFile(assets/"beach.stg-scene");
    const auto scene = beach::readSceneGeometry(bytes);
    check(scene.models.size() == 167 && scene.matrices.size() == 167 && scene.cameras.size() == 2, "original counts");
    check(scene.matricesOffset == 360060 && scene.camerasOffset == 370748 && scene.remainingOffset == 372259,
          "original boundaries from independent serializer trace");
    check(scene.rootCount == 143 && scene.transformOrder.back() == std::make_pair(130u,8u), "original hierarchy");
    std::size_t triangles = 0, buffers = 0;
    for (const auto& model : scene.models) {
        buffers += model.buffers.size();
        for (const auto& surface : model.surfaces) triangles += surface.indices.size()/3;
    }
    check(triangles == 4347 && buffers == 184, "original triangle/buffer totals");
    check(scene.models.front().name == "0000001_Towel" && scene.models.back().name == "ZZZZ_Lights_Tree_glow",
          "model name endpoints");
    check(scene.models.front().surfaces[0].material.layers[0].file.name == "swap/Towel Type", "material reference");
    check(scene.cameraSets[0].cameras == std::vector<std::uint32_t>{0,1}, "original camera group");
    const auto appearance = beach::defaultAppearance(scene);
    check(appearance.textures.at("swap/Towel Type") == "/tex/beach_towel_red.pvr", "original default towel");
    check(appearance.textures.at("swap/Sky Type") == "/tex/sky__hq.pvr", "original noon sky");
    check(beach::renderTransforms(scene,scene.cameras[1]).size() == 167, "original world transforms");
    std::cout << "Original scene: 167 models, 184 vertex buffers, 4347 triangles, 2 cameras, 143 roots\n";
}
void writeFixture(const std::filesystem::path& directory, bool invisible = false) {
    std::filesystem::create_directories(directory);
    const GeometryFixture fixture;
    auto bytes = fixture.bytes;
    if (invisible) set32(bytes,fixture.offsets.at("geometry_opacity"),0x3b800000); // Exactly 1/256.
    // The renderer reads to the end of the scene, so replace the unparsed
    // geometry marker with an unanimated tail: empty vertex-animation, skeleton
    // and visibility counts, a zero duration with eight empty table counts, and
    // an empty logic-scene array. Every field is zero.
    bytes.resize(fixture.offsets.at("geometry_end"));
    bytes.resize(bytes.size()+9*4+8+8*4+4);
    std::ofstream file(directory/"beach.stg-scene",std::ios::binary);
    file.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());
    file.close();
    check(bool(file),"write synthetic render scene");
}
void checkFrame(const std::filesystem::path& path, bool invisible = false) {
    const auto bytes = beach::readFile(path);
    const std::string header = "P7\nWIDTH 64\nHEIGHT 64\nDEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n";
    check(bytes.size() == header.size()+64*64*4 && std::equal(header.begin(),header.end(),bytes.begin()), "rendered PAM dimensions");
    const auto at = header.size()+(32*64+32)*4;
    if (invisible)
        check(std::equal(bytes.begin()+at,bytes.begin()+at+4,bytes.begin()+header.size()),
              "model at alpha threshold does not draw");
    else
        check(bytes[at] >= 250 && bytes[at+1] <= 2 && bytes[at+2] <= 2, "center pixel is the authored red triangle");
    check(bytes[header.size()] >= 11 && bytes[header.size()] <= 15, "corner pixel is clear colour");
}
} // namespace
int main(int argc, char** argv) {
    try {
        if (argc == 1) unitTests();
        else if (argc == 2) original(argv[1]);
        else if (argc == 3 && std::string(argv[1]) == "--write-render-fixture") writeFixture(argv[2]);
        else if (argc == 3 && std::string(argv[1]) == "--check-frame") checkFrame(argv[2]);
        else if (argc == 3 && std::string(argv[1]) == "--write-invisible-fixture") writeFixture(argv[2],true);
        else if (argc == 3 && std::string(argv[1]) == "--check-invisible-frame") checkFrame(argv[2],true);
        else throw std::runtime_error("unexpected test arguments");
        std::cout << "PASS\n";
    } catch (const std::exception& error) { std::cerr << "FAIL: " << error.what() << '\n'; return 1; }
}
