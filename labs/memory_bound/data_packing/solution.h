#include <vector>

// Assume those constants never change
constexpr int N = 1000000;
constexpr int minRandom = 0;
constexpr int maxRandom = 100;

struct S {
  // 4 bytes
  float d;            // [0.01 - 1], 4 bytes
  // 4 bytes
  unsigned l: 14;    // [0 10000], 14 bits
  unsigned i: 7;     // [0 100], 7 bits
  unsigned s: 7;     // [0 100], 7 bits
  unsigned b: 1;     // [0 1], 1 bit


  bool operator<(const S &s) const { return this->i < s.i; }
};

void init(std::vector<S> &arr);
S create_entry(int first_value, int second_value);
void solution(std::vector<S> &arr);
