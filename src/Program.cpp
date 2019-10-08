#include <iostream>
#include "../inlcude/TaylorCos.h"

int main() {
  std::cout << TaylorCos::calculate(2, 10, 2, 2) << std::endl;
  return 0;
}
