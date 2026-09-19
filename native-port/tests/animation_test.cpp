#include "beach/animation.hpp"
#include "geometry_fixture.hpp"
#include <cmath>
#include <iostream>
#include <limits>
#include <stdexcept>

namespace {
void check(bool value, const char* message) { if (!value) throw std::runtime_error(message); }
void set32(beach::Bytes& bytes, std::size_t offset, std::uint32_t value) {
    for (unsigned i = 0; i < 4; ++i) bytes.at(offset+i) = (value >> (i*8)) & 255;
}
float floatAt(const beach::Bytes& bytes, std::size_t offset) {
    std::uint32_t bits = 0;
    for (unsigned i = 0; i < 4; ++i) bits |= std::uint32_t(bytes.at(offset+i)) << (i*8);
    float value; std::memcpy(&value,&bits,4); return value;
}
struct Fixture : GeometryFixture {
    static constexpr std::uint64_t start = 5000000000ULL;
    void u64(std::uint64_t value) { u32(value); u32(value >> 32); }
    Fixture() {
        bytes.resize(offsets.at("geometry_end"));
        // Convert the first model's authored xyz buffer to tightly packed xyzw.
        // Destination W=7 must survive blending from frames with different W.
        set32(bytes,offsets.at("geometry_component")+8,4);
        set32(bytes,offsets.at("geometry_stride"),16);
        for (int vertex = 2; vertex >= 0; --vertex) {
            const auto offset = offsets.at("geometry_vertex")+vertex*12+12;
            bytes.insert(bytes.begin()+offset,{0,0,0xe0,0x40});
        }
        mark("animation_start"); u32(1); mark("model_index"); u32(0);
        mark("blender_version"); u32(3); mark("frame_count"); u32(3); u32(3);
        mark("track_version"); u32(5); f32(0); mark("curve_count"); u32(2);
        u64(start); u64(start+2000); u8(1); mark("driver"); u32(3); u64(0);
        for (unsigned curve = 0; curve < 2; ++curve) {
            if (!curve) mark("curve_version");
            u32(2); const auto time = start+curve*1000;
            for (auto delta : {0,333,666,1000}) u64(time+delta);
            for (float value : {float(curve),float(curve)+0.333f,float(curve)+0.666f,float(curve+1)}) f32(value);
        }
        mark("intervals"); u64(start); u64(start+1000); u64(start+1000); u64(start+2000);
        mark("frame_data");
        for (unsigned frame = 0; frame < 3; ++frame)
            for (unsigned vertex = 0; vertex < 3; ++vertex) {
                f32(float(frame*10+vertex)); f32(float(frame*20)); f32(-float(frame*10));
                f32(float(100+frame));
            }
        mark("animation_end"); u32(0); // Skeleton count is not consumed yet.
    }
};
void rejects(const beach::Bytes& bytes) {
    try { beach::readSceneAnimation(bytes); } catch (const std::runtime_error&) { return; }
    throw std::runtime_error("accepted malformed animation");
}
void unitTests() {
    using namespace beach;
    const Fixture fixture;
    auto scene = readSceneAnimation(fixture.bytes);
    check(scene.vertexAnimations.size() == 1 && scene.remainingOffset == fixture.offsets.at("animation_end"), "animation boundary");
    const auto& animation = scene.vertexAnimations[0];
    check(animation.track.start == Fixture::start && animation.track.end == Fixture::start+2000, "64-bit times retain high words");
    check(animation.frames.size() == 3 && animation.frames[2][2][0] == 22, "frame/vertex layout");
    auto& model = scene.geometry.models[0];
    const auto before = model.buffers[0].data;
    check(!sampleVertexAnimation(animation,Fixture::start-1,model) && model.buffers[0].data == before,
          "before start leaves destination unchanged");
    check(sampleVertexAnimation(animation,Fixture::start+500,model), "midpoint samples");
    for (unsigned vertex = 0; vertex < 3; ++vertex) {
        check(std::abs(floatAt(model.buffers[0].data,vertex*16)-(5+float(vertex))) < 1e-5f, "XYZ interpolates adjacent frames");
        check(floatAt(model.buffers[0].data,vertex*16+4) == 10 &&
              floatAt(model.buffers[0].data,vertex*16+8) == -5 &&
              floatAt(model.buffers[0].data,vertex*16+12) == 7, "XYZ updated and destination W preserved");
    }
    check(sampleVertexAnimation(animation,Fixture::start+1000,model) && floatAt(model.buffers[0].data,0) == 10,
          "segment boundary selects next frame pair");
    const auto atBoundary = model.buffers[0].data;
    check(!sampleVertexAnimation(animation,animation.track.end,model) && model.buffers[0].data == atBoundary,
          "end is exclusive; no implicit looping");
    for (std::size_t end = fixture.offsets.at("animation_start"); end < scene.remainingOffset; ++end)
        rejects(Bytes(fixture.bytes.begin(),fixture.bytes.begin()+end));
    for (const auto& [name,value] : std::vector<std::pair<std::string,std::uint32_t>>{
             {"model_index",2},{"blender_version",4},{"frame_count",1},{"frame_count",0xffffffff},
             {"track_version",6},{"curve_count",3},{"curve_version",3},{"driver",13},
             {"frame_data",0x7fc00000},{"intervals",0}}) {
        auto bytes = fixture.bytes; set32(bytes,fixture.offsets.at(name),value); rejects(bytes);
    }
    auto invalid = animation;
    invalid.frames[0][1][0] = std::numeric_limits<float>::infinity();
    bool rejected = false;
    try { sampleVertexAnimation(invalid,Fixture::start+500,model); }
    catch (const std::runtime_error&) { rejected = true; }
    check(rejected && model.buffers[0].data == atBoundary,"sampling errors are transactional");
}
void original(const std::filesystem::path& assets) {
    using namespace beach;
    auto scene = readSceneAnimation(readFile(assets/"beach.stg-scene"));
    check(scene.vertexAnimations.size() == 14 && scene.remainingOffset == 445981,"original animation count/boundary");
    std::size_t frames = 0;
    for (const auto& animation : scene.vertexAnimations) {
        frames += animation.frames.size();
        auto& model = scene.geometry.models.at(animation.modelIndex);
        const auto w = floatAt(model.buffers[0].data,12);
        const auto& interval = animation.track.intervals.front();
        check(sampleVertexAnimation(animation,interval.first,model),"original first frame samples");
        check(floatAt(model.buffers[0].data,0) == animation.frames[0][0][0],"original first XYZ matches frame");
        const auto midpoint = interval.first+(interval.second-interval.first)/2;
        check(sampleVertexAnimation(animation,midpoint,model),"original midpoint samples");
        check(floatAt(model.buffers[0].data,12) == w,"original W preserved");
    }
    check(frames == 228 && scene.vertexAnimations.front().modelIndex == 75 &&
          scene.vertexAnimations.back().modelIndex == 160,"original model/frame inventory");
    check(scene.vertexAnimations[1].track.start == 3333000 && scene.vertexAnimations[12].track.driver == 4 &&
          scene.vertexAnimations[13].track.driver == 1,"original timing/driver fields");
    std::cout << "Original animations: 14 blocks, 228 frames; next section at 445981\n";
}
} // namespace
int main(int argc, char** argv) {
    try {
        if (argc == 1) unitTests();
        else if (argc == 2) original(argv[1]);
        else throw std::runtime_error("unexpected animation test arguments");
        std::cout << "PASS\n";
    } catch (const std::exception& error) { std::cerr << "FAIL: " << error.what() << '\n'; return 1; }
}
