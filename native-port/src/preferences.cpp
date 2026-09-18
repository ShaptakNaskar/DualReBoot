#include "scene_internal.hpp"

namespace beach {
namespace {
constexpr std::array<const char*, 11> tags{
    "TODP", "CAMS", "TSWP", "MTOG", "TFNT", "TGRP", "FCTX", "THEM", "MSWP", "INAP", "ENVI"};

std::vector<std::string> strings(Reader& reader, std::uint32_t count) {
    reader.require(std::size_t(count) * 4);
    std::vector<std::string> result;
    for (std::uint32_t i = 0; i < count; ++i) result.push_back(reader.string());
    return result;
}
std::vector<std::uint32_t> indices(Reader& reader, std::uint32_t count) {
    reader.require(std::size_t(count) * 4);
    std::vector<std::uint32_t> result;
    for (std::uint32_t i = 0; i < count; ++i) result.push_back(reader.u32());
    return result;
}
StringPairs pairs(Reader& reader, std::uint32_t count) {
    reader.require(std::size_t(count) * 8);
    StringPairs result;
    for (std::uint32_t i = 0; i < count; ++i) {
        auto key = reader.string();
        auto value = reader.string();
        result.emplace_back(std::move(key), std::move(value));
    }
    return result;
}

Preference readPreference(Reader& reader, PreferenceKind kind) {
    Preference pref;
    pref.offset = reader.offset();
    reader.tag(std::string("PREF") + tags.at(static_cast<std::size_t>(kind)));
    // Only the tagged schema variants used by scene v26; no legacy fallback.
    const auto version = kind == PreferenceKind::purchase ? 3u :
                         kind == PreferenceKind::environment ? 2u : 1u;
    reader.version(version, "preference");
    pref.key = reader.string();
    pref.name = reader.string();
    pref.description = reader.string();
    switch (kind) {
    case PreferenceKind::timeOfDay: {
        const auto count = reader.count(4);
        auto phases = indices(reader, count);
        for (auto phase : phases) if (phase > 7) reader.fail("invalid time-of-day phase");
        pref.data = TimeOfDayPreference{std::move(phases)};
        break;
    }
    case PreferenceKind::camera: {
        const auto count = reader.count(4);
        pref.data = CameraPreference{strings(reader, count)};
        break;
    }
    case PreferenceKind::textureSwap: {
        const auto count = reader.count(4);
        const auto index = reader.u32();
        pref.data = TextureSwapPreference{index, strings(reader, count)};
        break;
    }
    case PreferenceKind::modelToggle: {
        const auto count = reader.count(4);
        const auto enabled = reader.flag();
        pref.data = ModelTogglePreference{enabled, indices(reader, count)};
        break;
    }
    case PreferenceKind::textureFont: {
        const auto index = reader.u32();
        pref.data = TextureFontPreference{index, reader.flag()};
        break;
    }
    case PreferenceKind::textureGroup: {
        const auto count = reader.count(4);
        const auto childCount = reader.count(4);
        auto children = indices(reader, childCount);
        pref.data = TextureGroupPreference{std::move(children), strings(reader, count)};
        break;
    }
    case PreferenceKind::fileChooser: {
        FileChooserPreference chooser;
        for (auto& field : chooser.fields) field = reader.u32();
        pref.data = chooser;
        break;
    }
    case PreferenceKind::theme: {
        const auto count = reader.count(8);
        pref.data = ThemePreference{pairs(reader, count)};
        break;
    }
    case PreferenceKind::modelSwap: {
        ModelSwapPreference swap;
        swap.capacity = reader.u32();
        const auto count = reader.count(8);
        if (swap.capacity > 65536) reader.fail("excessive model-swap capacity");
        for (std::uint32_t i = 0; i < count; ++i) {
            auto name = reader.string();
            const auto models = reader.count(4);
            swap.choices.push_back({std::move(name), indices(reader, models)});
        }
        pref.data = std::move(swap);
        break;
    }
    case PreferenceKind::purchase: {
        const auto count = reader.count(8);
        auto extra = reader.string();
        pref.data = PurchasePreference{std::move(extra), pairs(reader, count)};
        break;
    }
    case PreferenceKind::environment: {
        const auto count = reader.count(4);
        pref.data = EnvironmentPreference{strings(reader, count)};
        break;
    }
    case PreferenceKind::count: reader.fail("invalid preference kind");
    }
    return pref;
}
} // namespace

const char* preferenceKindName(PreferenceKind kind) {
    return tags.at(static_cast<std::size_t>(kind));
}

ScenePreferences readPreferences(Reader& reader) {
    // USerialize::Load(UPreference_Scene), ARM 000591b4, x86 000632c0.
    reader.version(10, "scene preferences");
    ScenePreferences result;
    for (auto& count : result.allocationCounts) {
        count = reader.u32();
        if (count > 65536) reader.fail("excessive preference allocation count");
    }
    for (std::size_t group = 0; group < result.groups.size(); ++group) {
        const auto count = reader.count(24, 4096);
        for (std::uint32_t i = 0; i < count; ++i)
            result.groups[group].push_back(readPreference(reader, static_cast<PreferenceKind>(group)));
    }
    for (auto& chooser : result.groups[static_cast<std::size_t>(PreferenceKind::fileChooser)])
        std::get<FileChooserPreference>(chooser.data).trailingField = reader.u32();
    // v10 omits the old v5..8 GETimeOfDay list and appends key/value multi-prefs.
    const auto count = reader.count(8);
    result.multiPreferences = pairs(reader, count);
    return result;
}
} // namespace beach
