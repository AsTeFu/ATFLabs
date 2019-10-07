//
// Created by astefu on 10/8/19.
//

#include "../inlcude/DrinkReader.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

std::vector<Drink> DrinkReader::readDrink(const std::string& path) {
  std::ifstream file(path);

  if (!file.is_open()) {
    std::cout << "File not found!" << std::endl;
    return {};
  }

  std::vector<Drink> drink;

  int currentYear;
  file >> currentYear;

  for (std::string buffer; !file.eof(); file >> buffer) {
    std::string firm;
    std::string mark;
    int year;

    file.ignore(3);
    file >> firm >> mark >> year;
    file.ignore(1);

    drink.emplace_back(firm, mark, year);
  }

  file.close();
  return drink;
}
