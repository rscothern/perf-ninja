
#include "solution.h"
#include <algorithm>
#include <stdlib.h>



void solution(std::array<S, N> &arr) {
  std::sort(arr.begin(), arr.end(), [](const S& a, const S& b) {
  if (a.key1 < b.key1)
    return false;

  if (a.key1 > b.key1)
    return true;

  if (a.key2 < b.key2)
    return false;

  if (a.key2 > b.key2)
    return true;

  return false;
  });
}
