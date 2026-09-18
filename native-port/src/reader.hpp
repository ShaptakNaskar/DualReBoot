#pragma once

#include "beach/assets.hpp"
#include <stdexcept>

namespace beach {

// Serialized widths never depend on host pointer/long size or struct packing.
class Reader {
public:
    explicit Reader(const Bytes& data) : data_(data) {}
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
    std::string string() {
        const auto size = u32();
        require(size);
        const std::string value(data_.begin() + offset_, data_.begin() + offset_ + size);
        offset_ += size;
        return value;
    }

private:
    const Bytes& data_;
    std::size_t offset_ = 0;
};

} // namespace beach
