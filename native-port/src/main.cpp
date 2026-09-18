#include "beach/assets.hpp"

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <stdexcept>

int main(int argc, char** argv) {
    if (argc != 2 && argc != 4) {
        std::cerr << "Usage: beach-assets-inspect ASSET_DIR [--export-pam OUTPUT_DIR]\n";
        return 2;
    }
    try {
        const std::filesystem::path assets(argv[1]);
        std::filesystem::path output;
        if (argc == 4) {
            if (std::string(argv[2]) != "--export-pam")
                throw std::runtime_error("expected --export-pam");
            output = argv[3];
            if (output.empty()) throw std::runtime_error("export directory cannot be empty");
            std::filesystem::create_directories(output);
        }
        const auto scene = beach::readFile(assets / "beach.stg-scene");
        const auto header = beach::readSceneHeader(scene);
        std::cout << "Scene version " << header.version << '\n';
        for (const auto& [key, value] : header.metadata)
            std::cout << "  " << std::quoted(key) << " = " << std::quoted(value) << '\n';
        std::cout << "Scene body starts at byte " << header.payloadOffset << " ("
                  << scene.size() - header.payloadOffset << " bytes not decoded yet)\n";

        std::vector<std::filesystem::path> paths;
        for (const auto& entry : std::filesystem::directory_iterator(assets / "tex"))
            if (entry.is_regular_file() && entry.path().extension() == ".pvr")
                paths.push_back(entry.path());
        if (paths.empty()) throw std::runtime_error("no PVR textures found");
        std::sort(paths.begin(), paths.end());
        std::size_t mipCount = 0;
        std::uint64_t decodedBytes = 0;
        std::map<std::string, unsigned> formats;
        for (const auto& path : paths) {
            try {
                const auto texture = beach::decodePvr(beach::readFile(path));
                const auto& base = texture.levels.front();
                ++formats[beach::formatName(texture.format)];
                mipCount += texture.levels.size();
                for (const auto& mip : texture.levels) decodedBytes += mip.rgba.size();
                std::cout << path.filename().string() << ": " << base.width << 'x'
                          << base.height << ' ' << beach::formatName(texture.format)
                          << ", " << texture.levels.size() << " mips\n";
                if (!output.empty())
                    beach::writePam(output / (path.stem().string() + ".pam"), base);
            } catch (const std::exception& error) {
                throw std::runtime_error(path.string() + ": " + error.what());
            }
        }
        std::cout << "Decoded " << paths.size() << " textures / " << mipCount
                  << " mip levels / " << decodedBytes << " RGBA bytes\n";
        for (const auto& [format, count] : formats)
            std::cout << "  " << format << ": " << count << '\n';
    } catch (const std::exception& error) {
        std::cerr << "ERROR: " << error.what() << '\n';
        return 1;
    }
}
