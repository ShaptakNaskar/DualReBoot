#pragma once

#include "beach/assets.hpp"
#include <cmath>
#include <cstring>
#include <limits>
#include <stdexcept>

namespace beach {

// Serialized widths never depend on host pointer/long size or struct packing.
class Reader {
public:
    explicit Reader(const Bytes& data, std::size_t offset = 0) : data_(data) {
        require(offset);
        offset_ = offset;
    }
    std::size_t offset() const { return offset_; }
    std::size_t remaining() const { return data_.size() - offset_; }
    void require(std::size_t size) const {
        if (size > remaining()) fail("truncated input");
    }
    [[noreturn]] void fail(const std::string& reason) const {
        throw std::runtime_error(reason + " at byte " + std::to_string(offset_));
    }
    std::uint8_t u8() {
        require(1);
        return data_[offset_++];
    }
    std::uint16_t u16() {
        const auto low = u8();
        return static_cast<std::uint16_t>(low | (std::uint16_t(u8()) << 8));
    }
    std::uint32_t u32() {
        const auto low = u16();
        return low | (std::uint32_t(u16()) << 16);
    }
    std::uint64_t u64() {
        const auto low = u32();
        return low | (std::uint64_t(u32()) << 32);
    }
    std::int16_t i16() {
        const auto value = u16();
        return static_cast<std::int16_t>(value < 0x8000 ? int(value) : int(value) - 0x10000);
    }
    float f32() {
        static_assert(sizeof(float) == 4 && std::numeric_limits<float>::is_iec559);
        const auto bits = u32();
        float value;
        std::memcpy(&value, &bits, sizeof(value));
        if (!std::isfinite(value)) fail("non-finite scene float");
        return value;
    }
    bool flag() {
        const auto value = u8();
        if (value > 1) fail("invalid boolean");
        return value != 0;
    }
    void version(std::uint32_t expected, const char* section) {
        const auto actual = u32();
        if (actual != expected)
            fail(std::string(section) + ": unsupported version " + std::to_string(actual));
    }
    std::uint32_t count(std::size_t minimumBytes, std::uint32_t maximum = 65536) {
        return elements(u32(), minimumBytes, maximum);
    }
    std::uint32_t elements(std::uint32_t value, std::size_t minimumBytes,
                           std::uint32_t maximum = 65536) {
        if (value > maximum || value > itemsRemaining_ ||
            (minimumBytes && value > remaining() / minimumBytes))
            fail("invalid or excessive element count");
        itemsRemaining_ -= value;
        return value;
    }
    Bytes bytes(std::size_t size) {
        require(size);
        Bytes value(data_.begin() + offset_, data_.begin() + offset_ + size);
        offset_ += size;
        return value;
    }
    void tag(const std::string& expected) {
        require(expected.size());
        for (const auto c : expected)
            if (u8() != static_cast<std::uint8_t>(c)) fail("expected tag " + expected);
    }
    std::u16string string16() {
        const auto size = count(2);
        std::u16string value;
        value.reserve(size);
        for (std::uint32_t i = 0; i < size; ++i) value.push_back(u16());
        return value;
    }
    std::string string() {
        const auto size = u32();
        if (size > 1024 * 1024) fail("scene string exceeds limit");
        require(size);
        const std::string value(data_.begin() + offset_, data_.begin() + offset_ + size);
        offset_ += size;
        return value;
    }

private:
    const Bytes& data_;
    std::size_t offset_ = 0;
    std::uint32_t itemsRemaining_ = 200000;
};

} // namespace beach
