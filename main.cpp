#include "common.hpp"
#include <iostream>

using namespace std;

int main() {
  int n = 5;
  auto f = meta::factorial(n);
  auto pow = meta::Pow<int, 2>::value(10);
  auto va = meta::Fib<8>::value;
  auto fib_value = meta::fib(8);
  return 0;
}
