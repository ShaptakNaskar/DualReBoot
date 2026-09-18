#include "beach/assets.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>

namespace {
using beach::Bytes;
constexpr std::uint64_t rgb565 = 0x0005060500626772ULL;
constexpr std::uint64_t rgba4444 = 0x0404040461626772ULL;
constexpr std::uint64_t rgb888 = 0x0008080800626772ULL;

void check(bool condition, const std::string& message) {
    if (!condition) throw std::runtime_error(message);
}
template<class Function> void rejects(Function function, const std::string& message) {
    try { function(); } catch (const std::runtime_error&) { return; }
    throw std::runtime_error("accepted invalid input: " + message);
}
void append32(Bytes& bytes, std::uint32_t value) {
    for (unsigned i = 0; i < 4; ++i) bytes.push_back((value >> (8 * i)) & 255);
}
void set32(Bytes& bytes, std::size_t offset, std::uint32_t value) {
    for (unsigned i = 0; i < 4; ++i) bytes.at(offset + i) = (value >> (8 * i)) & 255;
}
void appendString(Bytes& bytes, const std::string& value) {
    append32(bytes, value.size());
    bytes.insert(bytes.end(), value.begin(), value.end());
}
Bytes pvr(std::uint64_t format, std::uint32_t width, std::uint32_t height,
          std::uint32_t mips, const Bytes& pixels) {
    Bytes bytes;
    for (auto value : {0x03525650u, 0u, std::uint32_t(format), std::uint32_t(format >> 32),
                       0u, 0u, height, width, 1u, 1u, 1u, mips, 0u})
        append32(bytes, value);
    bytes.insert(bytes.end(), pixels.begin(), pixels.end());
    return bytes;
}

void unitTests() {
    // Hand-encoded colours establish channel order, endianness, full-range
    // expansion and alpha independently of the implementation.
    const auto primary = pvr(rgb565, 4, 1, 1,
                             {0x00, 0xf8, 0xe0, 0x07, 0x1f, 0x00, 0xff, 0xff});
    check(beach::decodePvr(primary).levels[0].rgba == Bytes({
              255, 0, 0, 255, 0, 255, 0, 255, 0, 0, 255, 255, 255, 255, 255, 255}),
          "RGB565 primary colours");
    const auto alpha = pvr(rgba4444, 2, 1, 1, {0x38, 0xf0, 0x00, 0x00});
    check(beach::decodePvr(alpha).levels[0].rgba == Bytes({255, 0, 51, 136, 0, 0, 0, 0}),
          "RGBA4444 channels and alpha");
    check(beach::decodePvr(pvr(rgb888, 1, 1, 1, {19, 82, 213})).levels[0].rgba ==
              Bytes({19, 82, 213, 255}), "RGB888 byte order");

    Bytes oddPixels(54, 7);
    std::fill(oddPixels.begin() + 45, oddPixels.begin() + 51, 11);
    oddPixels[51] = 100;
    oddPixels[52] = 150;
    oddPixels[53] = 200;
    const auto odd = beach::decodePvr(pvr(rgb888, 3, 5, 3, oddPixels));
    check(odd.levels.size() == 3 && odd.levels[1].width == 1 && odd.levels[1].height == 2 &&
              odd.levels[2].rgba == Bytes({100, 150, 200, 255}), "odd-sized mip offsets");

    for (std::size_t length = 0; length < primary.size(); ++length) {
        const Bytes cut(primary.begin(), primary.begin() + length);
        rejects([&] { beach::decodePvr(cut); }, "truncation at " + std::to_string(length));
    }
    // Every header field that could silently change interpretation is checked.
    for (const auto& [offset, value] : std::vector<std::pair<std::size_t, std::uint32_t>>{
             {0, 0}, {4, 2}, {8, 6}, {12, 0}, {16, 1}, {20, 1}, {24, 0},
             {28, 0}, {28, 0xffffffff}, {32, 2}, {36, 2}, {40, 6}, {44, 0},
             {44, 4}, {48, 12}}) {
        auto invalid = primary;
        set32(invalid, offset, value);
        rejects([&] { beach::decodePvr(invalid); }, "header field at " + std::to_string(offset));
    }
    auto trailing = primary;
    trailing.push_back(0);
    rejects([&] { beach::decodePvr(trailing); }, "trailing payload");
    auto excessive = primary;
    set32(excessive, 24, 8192);
    set32(excessive, 28, 8192);
    rejects([&] { beach::decodePvr(excessive); }, "excessive decoded allocation");

    Bytes scene;
    append32(scene, 26);
    append32(scene, 2);
    appendString(scene, "export-date");
    appendString(scene, "fixture");
    appendString(scene, "source-file");
    appendString(scene, "test.max");
    const auto prefixSize = scene.size();
    scene.insert(scene.end(), {10, 0, 0, 0, 99}); // Undecoded body is allowed.
    const auto header = beach::readSceneHeader(scene);
    check(header.version == 26 && header.payloadOffset == prefixSize &&
              header.metadata == std::vector<std::pair<std::string, std::string>>{
                  {"export-date", "fixture"}, {"source-file", "test.max"}},
          "scene header preserves ordered metadata and body boundary");
    for (std::size_t length = 0; length < prefixSize; ++length) {
        const Bytes cut(scene.begin(), scene.begin() + length);
        rejects([&] { beach::readSceneHeader(cut); }, "scene truncation");
    }
    auto invalidScene = scene;
    set32(invalidScene, 0, 27);
    rejects([&] { beach::readSceneHeader(invalidScene); }, "unknown scene version");
    invalidScene = scene;
    set32(invalidScene, 4, 0xffffffff);
    rejects([&] { beach::readSceneHeader(invalidScene); }, "excessive metadata count");
    invalidScene = scene;
    set32(invalidScene, 8, 0xffffffff);
    rejects([&] { beach::readSceneHeader(invalidScene); }, "excessive string length");
    rejects([] { beach::writePam("unused.pam", {1, 1, {}}); }, "invalid output image");
}

void originalAssets(const std::filesystem::path& assets) {
    const auto scene = beach::readFile(assets / "beach.stg-scene");
    const auto header = beach::readSceneHeader(scene);
    check(scene.size() == 759892 && header.version == 26 && header.payloadOffset == 78 &&
              header.metadata == std::vector<std::pair<std::string, std::string>>{
                  {"export-date", "2014-07-02_20-20-29"}, {"source-file", "Beach_311.max"}},
          "original scene metadata");
    std::array<unsigned, 3> counts{};
    std::size_t mipCount = 0;
    for (const auto& entry : std::filesystem::directory_iterator(assets / "tex")) {
        if (entry.path().extension() != ".pvr") continue;
        auto bytes = beach::readFile(entry.path());
        const auto texture = beach::decodePvr(bytes);
        ++counts.at(static_cast<unsigned>(texture.format));
        mipCount += texture.levels.size();
        for (const auto& mip : texture.levels) {
            check(mip.rgba.size() == std::size_t(mip.width) * mip.height * 4,
                  "original mip byte count");
            if (texture.format != beach::PixelFormat::rgba4444)
                for (std::size_t i = 3; i < mip.rgba.size(); i += 4)
                    check(mip.rgba[i] == 255, "opaque original texture alpha");
        }
        bytes.pop_back();
        rejects([&] { beach::decodePvr(bytes); }, entry.path().string() + " truncated");
    }
    check(counts == std::array<unsigned, 3>{80, 11, 9}, "all 100 original textures decoded");
    check(mipCount == 748, "all original mip levels decoded");
    std::cout << "Original assets: 100 textures, " << mipCount << " mip levels\n";
}
} // namespace

int main(int argc, char** argv) {
    try {
        if (argc == 1) unitTests();
        else if (argc == 2) originalAssets(argv[1]);
        else throw std::runtime_error("unexpected test arguments");
        std::cout << "PASS\n";
    } catch (const std::exception& error) {
        std::cerr << "FAIL: " << error.what() << '\n';
        return 1;
    }
}
