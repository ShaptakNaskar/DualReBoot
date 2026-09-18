#pragma once
#include "beach/assets.hpp"
#include <array>
#include <cstring>
#include <map>

// Synthetic, authored fixture: no original scene/font/texture bytes are included.
struct SceneFixture {
    beach::Bytes bytes;
    std::map<std::string, std::size_t> offsets;
    void mark(const char* name) { offsets[name] = bytes.size(); }
    void u8(unsigned value) { bytes.push_back(value); }
    void u16(unsigned value) { u8(value & 255); u8((value >> 8) & 255); }
    void u32(std::uint32_t value) { u16(value & 65535); u16(value >> 16); }
    void f32(float value) {
        std::uint32_t bits;
        std::memcpy(&bits, &value, 4);
        u32(bits);
    }
    void text(const std::string& value) {
        u32(value.size());
        bytes.insert(bytes.end(), value.begin(), value.end());
    }
    void text16(const std::u16string& value) {
        u32(value.size());
        for (auto c : value) u16(c);
    }
    void reference(const std::string& name, std::uint32_t hash) {
        u32(1); text(name); u32(hash);
    }
    void phase(unsigned value) { u32(1); u32(value); }
    void preference(const std::string& tag, unsigned version = 1) {
        u32(1); // One record in this group.
        const auto signature = "PREF" + tag;
        bytes.insert(bytes.end(), signature.begin(), signature.end());
        u32(version);
        text("key_" + tag); text("Name " + tag); text("Description " + tag);
    }
    SceneFixture() {
        u32(26); u32(1); text("fixture"); text("synthetic");
        mark("preferences"); u32(10);
        mark("allocation_counts");
        for (unsigned i = 0; i < 11; ++i) u32(1);
        mark("first_group_count"); preference("TODP");
        u32(2); u32(0); mark("phase_value"); u32(7);
        preference("CAMS"); u32(1); text("Camera");
        preference("TSWP"); u32(2); mark("swap_index"); u32(0); text("Day"); text("Night");
        preference("MTOG"); u32(1); mark("toggle_flag"); u8(1); mark("model_index"); u32(1);
        preference("TFNT"); u32(0); u8(1);
        preference("TGRP"); u32(2); u32(1); mark("group_child"); u32(0); text("Day"); text("Night");
        preference("FCTX"); u32(0); u32(3);
        preference("THEM"); u32(1); text("key_TGRP"); text("Night");
        preference("MSWP"); u32(1); u32(2);
        text("None"); u32(0); text("One"); u32(1); u32(1);
        preference("INAP", 3); u32(1); text("preserve-only"); text("key_MTOG"); text("false");
        preference("ENVI", 2); u32(1); text("Default");
        u32(19); // Per-file-chooser trailing word, after all eleven groups.
        u32(1); text("multi-key"); text("multi-value");

        mark("environment"); u32(1); u32(1); u32(1); u32(2);
        for (unsigned phaseIndex = 0; phaseIndex < 2; ++phaseIndex) {
            u32(1);
            if (!phaseIndex) mark("environment_float");
            for (unsigned c = 0; c < 12; ++c) f32(float(c + phaseIndex) / 16);
            f32(-2); f32(2); u8(1); u8(0);
        }
        mark("texture_modifier"); u32(8); u32(1);
        mark("swap_container"); u32(2); u32(1);
        u32(4); text("Sky"); u32(2); u8(1); u8(0);
        text("Day"); reference("/tex/day.pvr", 0x12345678); phase(4); u32(0xffffffff);
        text("Night"); reference("/tex/night.pvr", 0x87654321); phase(1); u32(0xffffffff);

        mark("font_container"); u32(1); u32(1); u32(1);
        mark("font"); u32(5); reference("", 0xffffffff); f32(24); u16(1); u8(0);
        mark("font_data_size"); u32(4); u8(11); u8(22); u8(33); u8(44);
        u16(65);
        for (const auto v : {0.25f, 0.5f, 0.75f, 1.0f}) f32(v);
        for (const auto v : {-3, -12, 5, 15, 4}) u16(static_cast<std::uint16_t>(v));
        u32(2);
        mark("texture_font"); u32(3); reference("/tex/sign.pvr", 0xaabbccdd);
        u32(2); u8(1); mark("font_index"); u32(0);
        mark("utf16_count"); text16(u"Hello"); text16(u"Beach \U0001f30a");
        u8(1); u8(7); u8(4);

        mark("modifier_record"); u8(1); u8(1); u8(0);
        u32(0); mark("modifier_choice"); u32(1); u32(0); u32(0xffffffff);
        phase(1); u8(1);
        reference("swap/Sky", 123); reference("/tex/night.pvr", 0x87654321);
        u32(0xffffffff); u8(0);
        mark("model_counts"); u32(2); u32(2); u32(1);
        mark("models"); u32(16); // Unparsed model body marker.
    }
};
