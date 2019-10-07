#include <iostream>
#include <string>
#include "../inlcude/Utility.h"
#include "../inlcude/Vector.h"

Vector<int> getVector(const std::string& name);

int main() {
  Vector<int> a = getVector("First vector");
  Vector<int> b = getVector("Second vector");

  std::cout << std::endl << "First vector:" << a << std::endl
                         << "Second vector: " << b << std::endl;

  Vector<int> c = a + b;
  std::cout << "a + b = " << c << std::endl;

  return 0;
}

Vector<int> getVector(const std::string& name) {
  std::cout << name << std::endl;
  int x = Utility::getNumber("\tInput x:");
  int y = Utility::getNumber("\tInput y:");
  int z = Utility::getNumber("\tInput z:");
  return {x, y, z};
}
