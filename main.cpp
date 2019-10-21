#include <iostream>

using namespace std;

namespace meta::isa {
int foo() { return 1; }
} // namespace meta::isa

int main() {
  auto x = meta::isa::foo();
  return 0;
}
