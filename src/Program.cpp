#include <iostream>
#include "../inlcude/DrinkReader.h"

int main() {
  auto drinks = DrinkReader::readDrink("Resource/file.txt");

  for (const auto& drink : drinks) std::cout << drink.to_string() << std::endl;

  return 0;
}
