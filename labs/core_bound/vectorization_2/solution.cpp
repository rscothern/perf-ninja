#include "solution.hpp"
#include <cstdio>

uint16_t checksum(const Blob &blob) {
  uint32_t acc = 0; // use a wider accumlator
  for (auto value : blob) {
    acc += value;
  }
  // Carries live in high bits
  uint16_t carries = (acc >> 16) & 0xF0;
  uint16_t low = acc & 0xFFFFu;
  acc = low + carries;

  // TODO: account for overflow adding above

  return (uint16_t) acc;
}
