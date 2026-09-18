#include "beach/assets.hpp"
#include "reader.hpp"

#include <algorithm>
#include <fstream>
#include <stdexcept>

namespace beach {
namespace {
// Conservative limits for this small original asset set, including decoded mips.
constexpr std::uint64_t maxFileBytes = 64 * 1024 * 1024;
constexpr std::uint64_t maxDecodedBytes = 128 * 1024 * 1024;
constexpr std::uint64_t rgb565 = 0x0005060500626772ULL;
constexpr std::uint64_t rgba4444 = 0x0404040461626772ULL;
constexpr std::uint64_t rgb888 = 0x0008080800626772ULL;

std::uint8_t normalized(unsigned value, unsigned maximum) {
    return static_cast<std::uint8_t>((value * 255 + maximum / 2) / maximum);
}
} // namespace

Bytes readFile(const std::filesystem::path& path) {
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file) throw std::runtime_error("cannot open " + path.string());
    const auto length = file.tellg();
    if (length < 0 || static_cast<std::uint64_t>(length) > maxFileBytes)
        throw std::runtime_error("invalid or excessive file size: " + path.string());
    Bytes bytes(static_cast<std::size_t>(length));
    file.seekg(0);
    if (!bytes.empty() && !file.read(reinterpret_cast<char*>(bytes.data()), length))
        throw std::runtime_error("cannot read " + path.string());
    return bytes;
}

const char* formatName(PixelFormat format) {
    switch (format) {
    case PixelFormat::rgb565: return "RGB565";
    case PixelFormat::rgba4444: return "RGBA4444";
    case PixelFormat::rgb888: return "RGB888";
    }
    throw std::runtime_error("unknown pixel format");
}

Texture decodePvr(const Bytes& data) {
    Reader reader(data);
    if (reader.u32() != 0x03525650) reader.fail("expected little-endian PVR v3");
    if (reader.u32() != 0) reader.fail("unsupported PVR flags");
    const auto encoding = reader.u64();
    Texture texture;
    unsigned bytesPerPixel = 2;
    switch (encoding) {
    case rgb565: texture.format = PixelFormat::rgb565; break;
    case rgba4444: texture.format = PixelFormat::rgba4444; break;
    case rgb888: texture.format = PixelFormat::rgb888; bytesPerPixel = 3; break;
    default: reader.fail("unsupported PVR pixel format");
    }
    if (reader.u32() != 0) reader.fail("unsupported PVR colour space");
    if (reader.u32() != 0) reader.fail("unsupported PVR channel type");
    auto height = reader.u32();
    auto width = reader.u32();
    if (!width || !height || width > 8192 || height > 8192)
        reader.fail("invalid or excessive texture dimensions");
    const auto depth = reader.u32();
    const auto surfaces = reader.u32();
    const auto faces = reader.u32();
    if (depth != 1 || surfaces != 1 || faces != 1)
        reader.fail("only single 2D textures are supported");
    const auto levels = reader.u32();
    unsigned maxLevels = 1;
    for (auto size = std::max(width, height); size > 1; size >>= 1) ++maxLevels;
    if (!levels || levels > maxLevels) reader.fail("invalid mip count");
    // The supplied files have no metadata. Reject rather than silently ignore
    // orientation/type overrides that could change how pixels are interpreted.
    if (reader.u32() != 0) reader.fail("PVR metadata is not supported yet");

    // Validate the entire payload and allocation budget before allocating pixels.
    std::uint64_t pixels = 0;
    auto mipWidth = width;
    auto mipHeight = height;
    for (unsigned level = 0; level < levels; ++level) {
        pixels += std::uint64_t(mipWidth) * mipHeight;
        mipWidth = std::max(1u, mipWidth / 2);
        mipHeight = std::max(1u, mipHeight / 2);
    }
    if (pixels * 4 > maxDecodedBytes) reader.fail("decoded texture exceeds memory limit");
    if (pixels * bytesPerPixel != reader.remaining())
        reader.fail("PVR payload size does not match mip dimensions");

    for (unsigned level = 0; level < levels; ++level) {
        MipLevel mip{width, height, Bytes(std::size_t(width) * height * 4)};
        for (std::size_t i = 0; i < mip.rgba.size(); i += 4) {
            auto* pixel = mip.rgba.data() + i;
            if (texture.format == PixelFormat::rgb888) {
                pixel[0] = reader.u8();
                pixel[1] = reader.u8();
                pixel[2] = reader.u8();
                pixel[3] = 255;
            } else {
                // Same packed channel order as GETexture::GetPixel and the
                // original GL_UNSIGNED_SHORT_5_6_5 / _4_4_4_4 uploads. Expand
                // normalized values to full range, as the GPU does on sampling.
                const auto value = reader.u16();
                if (texture.format == PixelFormat::rgb565) {
                    pixel[0] = normalized((value >> 11) & 31, 31);
                    pixel[1] = normalized((value >> 5) & 63, 63);
                    pixel[2] = normalized(value & 31, 31);
                    pixel[3] = 255;
                } else {
                    pixel[0] = normalized((value >> 12) & 15, 15);
                    pixel[1] = normalized((value >> 8) & 15, 15);
                    pixel[2] = normalized((value >> 4) & 15, 15);
                    pixel[3] = normalized(value & 15, 15);
                }
            }
        }
        texture.levels.push_back(std::move(mip));
        width = std::max(1u, width / 2);
        height = std::max(1u, height / 2);
    }
    return texture;
}

void writePam(const std::filesystem::path& path, const MipLevel& image) {
    const auto pixels = std::uint64_t(image.width) * image.height;
    if (!pixels || pixels > maxDecodedBytes / 4 || pixels * 4 != image.rgba.size())
        throw std::runtime_error("invalid RGBA image");
    std::ofstream file(path, std::ios::binary);
    file << "P7\nWIDTH " << image.width << "\nHEIGHT " << image.height
         << "\nDEPTH 4\nMAXVAL 255\nTUPLTYPE RGB_ALPHA\nENDHDR\n";
    file.write(reinterpret_cast<const char*>(image.rgba.data()), image.rgba.size());
    file.close();
    if (!file) throw std::runtime_error("cannot write " + path.string());
}

SceneHeader readSceneHeader(const Bytes& data) {
    Reader reader(data);
    SceneHeader header;
    header.version = reader.u32();
    if (header.version != 26) reader.fail("only scene version 26 is supported");
    const auto count = reader.u32();
    if (count > 4096 || count > reader.remaining() / 8)
        reader.fail("invalid scene metadata count");
    for (std::uint32_t i = 0; i < count; ++i) {
        // Keep reads sequential: argument evaluation order must not swap fields.
        auto key = reader.string();
        auto value = reader.string();
        header.metadata.emplace_back(std::move(key), std::move(value));
    }
    header.payloadOffset = reader.offset();
    return header;
}
} // namespace beach
