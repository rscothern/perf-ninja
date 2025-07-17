#include <vector>

// Assume those constants never change
constexpr int N = 1000000;
constexpr int minRandom = 0;
constexpr int maxRandom = 100;

struct S {
  long long l; // 8 bytes, wb
  double d;    // 8 bytes, wb
  int i;       // 4 bytes
  short s;     // 2 bytes
  bool b;      // 1 byte
               // 1 byte implicit padding, wb

  bool operator<(const S &s) const { return this->i < s.i; }
};

void init(std::vector<S> &arr);
S create_entry(int first_value, int second_value);
void solution(std::vector<S> &arr);
