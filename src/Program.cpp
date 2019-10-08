#include <iostream>
#include "../inlcude/DrinkReader.h"
#include "../inlcude/DrinkWriter.h"

int main() {
  DrinkReader drinkReader;
  drinkReader.readDrink("Resource/file.txt");

  DrinkWriter drinkWriter;
  drinkWriter.writeDrink(drinkReader.drink);
  drinkWriter.writeTea(drinkReader.tea, drinkReader.year);
  drinkWriter.writeCoffee(drinkReader.coffee, drinkReader.year);

  for (const auto& drink : drinkReader.drink)
    std::cout << drink.to_string() << std::endl;

  std::cout << "===========================" << std::endl;

  for (const auto& tea : drinkReader.tea)
    std::cout << tea.to_string(drinkReader.year) << std::endl;

  std::cout << "===========================" << std::endl;

  for (const auto& coffee : drinkReader.coffee)
    std::cout << coffee.to_string(drinkReader.year) << std::endl;

  return 0;
}
