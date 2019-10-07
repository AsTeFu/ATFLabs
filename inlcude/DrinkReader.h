//
// Created by astefu on 10/8/19.
//

#ifndef ATFLABS_DRINKREADER_H
#define ATFLABS_DRINKREADER_H

#include <string>
#include <vector>
#include "../inlcude/Coffee.h"
#include "../inlcude/Drink.h"
#include "../inlcude/Tea.h"

class DrinkReader {
 public:
  static std::vector<Drink> readDrink(const std::string& path);
  static std::vector<Tea> readTea(const std::string& path);
  static std::vector<Coffee> readCoffe(const std::string& path);
};

#endif  // ATFLABS_DRINKREADER_H
