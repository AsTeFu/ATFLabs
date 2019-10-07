//
// Created by astefu on 10/7/19.
//

#include "../inlcude/Tea.h"
#include <string>

Tea::Tea(const std::string& firm, const std::string& mark, int year, int type) : Drink(firm, mark, year), _type(type) {}

std::string Tea::to_string(int currentYear) const {
  if (currentYear < _year)
    return "not released yet!";
  else if (currentYear - _year > 3)
    return "spoiled!";
  else
    return Drink::to_string() + " " + std::to_string(_type);
}

void Tea::setType(int type) {
  _type = type;
}
int Tea::getType() const {
  return _type;
}
