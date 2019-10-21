#include "common.hpp"
#include <iostream>

using namespace std;

int main() {
  auto va = meta::Fib<8>::value;
  return 0;
}
