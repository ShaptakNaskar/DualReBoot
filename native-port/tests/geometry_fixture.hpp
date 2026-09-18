#pragma once
#include "scene_fixture.hpp"

struct GeometryFixture : SceneFixture {
    void matrix(float x = 0, float y = 0, float z = 0) {
        for (float value : {1.f,0.f,0.f,0.f, 0.f,1.f,0.f,0.f, 0.f,0.f,1.f,0.f, x,y,z,1.f}) f32(value);
    }
    GeometryFixture() {
        bytes.resize(offsets.at("models"));
        for (unsigned model = 0; model < 2; ++model) {
            if (!model) mark("geometry_model");
            u32(16); u32(1); u32(3); u32(1);
            u32(2); u32(1);
            if (!model) mark("geometry_component");
            u32(0); u32(0); u32(3); // Position, float, xyz.
            u32(0); u32(3);
            if (!model) mark("geometry_stride");
            u32(12);
            if (!model) mark("geometry_vertex");
            // Clockwise triangle in screen space with the camera below.
            for (float value : {-1.f,-1.f,0.f, 0.f,1.f,0.f, 1.f,-1.f,0.f}) f32(value);
            u32(1);
            if (!model) mark("geometry_triangle_count");
            u32(1);
            if (!model) mark("geometry_index");
            u16(0); u16(1); u16(2);
            if (!model) mark("geometry_material");
            u32(6); u32(0); u32(0); u32(0);
            for (float value : {model == 0 ? 1.f : 0.f, model == 1 ? 1.f : 0.f,0.f,1.f}) f32(value);
            u32(1); u32(1); u32(0); u32(0);
            for (unsigned i = 0; i < 4; ++i) f32(1);
            reference("",0xffffffff); u32(0); u32(0); matrix();
            for (unsigned i = 0; i < 9; ++i) f32(0);
            f32(2); u8(0); u8(0); f32(0); u8(0); u8(0); f32(0); f32(1);
            u8(0); f32(0); f32(0); f32(0); u8(0);
            for (unsigned i = 0; i < 4; ++i) f32(1);
            if (!model) mark("geometry_opacity");
            f32(1); u8(0); text(model == 0 ? "Triangle" : "Child"); u8(0); u8(0);
        }
        mark("geometry_matrices"); matrix(); matrix(2,0,0);
        mark("geometry_camera"); u32(2); u32(1);
        for (float value : {0.f,0.f,5.f, 0.f,0.f,0.f, 0.f,1.f,0.f}) f32(value);
        mark("geometry_fov"); f32(60); f32(1); f32(1); f32(100); f32(1); u8(0);
        u32(1); u32(1); text("Camera group"); u32(1); u32(0); u32(0); u32(0);
        mark("geometry_roots"); u32(1);
        u32(0); u32(0xffffffff); u32(1);
        mark("geometry_parent"); u32(0);
        mark("geometry_end"); u32(0xdeadbeef); // Unparsed animation/logic marker.
    }
};
