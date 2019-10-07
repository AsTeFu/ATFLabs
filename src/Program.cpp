#include <iostream>
#include "../inlcude/Numbers.h"
#include "../inlcude/Utility.h"

int main() {
  int x = Utility::getNumber("Input first number:");
  int y = Utility::getNumber("Input second number:");
  Numbers numbers(x, y);

  std::cout << "X = " << numbers.getX() << std::endl;
  std::cout << "Y = " << numbers.getY() << std::endl;

  int newX = Utility::getNumber("Input new x: ");
  numbers.setX(newX);
  std::cout << "newX = " << numbers.getX() << std::endl;

  int newY = Utility::getNumber("Input new y: ");
  numbers.setY(newY);
  std::cout << "newY = " << numbers.getY() << std::endl;

  std::cout << "subtraction = " << numbers.subtraction() << std::endl;
  std::cout << "average = " << numbers.average() << std::endl;
  return 0;
}
