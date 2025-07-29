#include "solution.hpp"
#include <algorithm>
#include <iostream>
/*
Run on (2 X 2500 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x1)
  L1 Instruction 32 KiB (x1)
  L2 Unified 1024 KiB (x1)
  L3 Unified 36608 KiB (x1)

Tile size approximation to keep input and output in L1 cache:
 32768 (L1 cache) / 8 (sizeof double) / 2 (input + output) = 2048 doubles
 sqrt(2048) = ~45
*/

bool solution(MatrixOfDoubles &in, MatrixOfDoubles &out) {
  const static int tile_size = 64;
  int size = in.size();

  for (int ii = 0; ii < size; ii += tile_size)
    for (int jj = 0; jj  < size; jj += tile_size)
      for (int i = ii; i < std::min(ii+tile_size, size); i++) // std::min handles unclean division of size with tile_size
        for (int j = jj; j < std::min(jj+tile_size, size); j++)
          out[i][j] = in[j][i];


  return out[0][size - 1];
}
