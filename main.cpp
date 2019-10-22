#include "common.hpp"
#include <iostream>

using namespace std;

int main() {
  auto pow = meta::Pow<int, 2>::value(10);
  auto va = meta::Fib<8>::value;
  return 0;
}
