#pragma once

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <string>
#include <utility>
#include <vector>

namespace beach {

using Bytes = std::vector<std::uint8_t>;
Bytes readFile(const std::filesystem::path& path);

enum class PixelFormat { rgb565, rgba4444, rgb888 };
const char* formatName(PixelFormat format);

struct MipLevel {
    std::uint32_t width = 0;
    std::uint32_t height = 0;
    // RGBA8, straight alpha, linear colour space, original stored row order.
    Bytes rgba;
};

struct Texture {
    PixelFormat format;
    std::vector<MipLevel> levels;
};

// Deliberately supports only the PVR v3 subset present in My Beach HD 2.2.
// Unsupported encodings and malformed/truncated files throw std::runtime_error.
Texture decodePvr(const Bytes& data);
void writePam(const std::filesystem::path& path, const MipLevel& image);

struct SceneHeader {
    std::uint32_t version = 0;
    std::vector<std::pair<std::string, std::string>> metadata;
    std::size_t payloadOffset = 0;
};

// Reads ONLY the v26 header and metadata. The remaining scene is not decoded.
SceneHeader readSceneHeader(const Bytes& data);

} // namespace beach
