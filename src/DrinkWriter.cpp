//
// Created by astefu on 10/8/19.
//

#include "../inlcude/DrinkWriter.h"
#include <fstream>
#include <vector>

void DrinkWriter::writeDrink(const std::vector<Drink>& drinks) {
  std::ofstream file("Resource/Drink.txt");
  for (const auto& drink : drinks) file << drink.to_string().c_str() << std::endl;
  file.close();
}

void DrinkWriter::writeTea(const std::vector<Tea>& teaCollection, int year) {
  std::ofstream file("Resource/Tea.txt");
  for (const auto& tea : teaCollection) file << tea.to_string(year).c_str() << std::endl;
  file.close();
}
void DrinkWriter::writeCoffee(const std::vector<Coffee>& coffeeCollection, int year) {
  std::ofstream file("Resource/Coffee.txt");
  for (const auto& tea : coffeeCollection) file << tea.to_string(year).c_str() << std::endl;
  file.close();
}
