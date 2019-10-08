//
// Created by astefu on 10/8/19.
//

#ifndef ATFLABS_DRINKWRITER_H
#define ATFLABS_DRINKWRITER_H

#include <vector>
#include "Coffee.h"
#include "Drink.h"
#include "Tea.h"
class DrinkWriter {
 public:
  void writeDrink(const std::vector<Drink>& drink);
  void writeTea(const std::vector<Tea>& teaCollection, int year);
  void writeCoffee(const std::vector<Coffee>& coffeeCollection, int year);
};

#endif  // ATFLABS_DRINKWRITER_H
