#include <iostream>
#include "../inlcude/TaylorCos.h"
#include "../inlcude/Utility.h"

int main() {
  TaylorCos taylorCos(Utility::getNumber("Input n: "), Utility::getNumber("Input a: "));
  std::cout << taylorCos;
  return 0;
}
