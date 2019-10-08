//
// Created by astefu on 10/8/19.
//

#include "../inlcude/DrinkReader.h"

#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

void DrinkReader::readDrink(const std::string& path) {
  FILE* file = fopen(path.c_str(), "rb+");

  if (file == nullptr) {
    std::cout << "File not found" << std::endl;
    return;
  }

  fscanf(file, "%d", &year);
  fseek(file, 1, SEEK_CUR);

  while (!feof(file)) {
    unsigned char typeDrink;
    char firm[50];
    char mark[50];
    int yearDrink, param;

    fscanf(file, "%c %s %s %d %d\n", &typeDrink, firm, mark, &yearDrink, &param);
    drink.emplace_back(firm, mark, yearDrink);

    if (typeDrink == 'T') tea.emplace_back(firm, mark, yearDrink, param);
    if (typeDrink == 'C') coffee.emplace_back(firm, mark, yearDrink, param);
  }

  fclose(file);
}
