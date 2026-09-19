#pragma once
#include "geometry_fixture.hpp"

// Extends the geometry fixture with one vertex-blender record.
// Ends exactly at the vertex-animation boundary so later sections can follow.
struct AnimationFixture : GeometryFixture {
    static constexpr std::uint64_t start = 5000000000ULL;
    void u64(std::uint64_t value) { u32(value); u32(value >> 32); }
    AnimationFixture() {
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
        mark("animation_end");
    }
};
