#pragma once

#include <cstdint>
#include <vector>

uint8_t* FindSignature(uint8_t* apStart, uint8_t* apEnd, std::vector<uint8_t> apSignature) noexcept;