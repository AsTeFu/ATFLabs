//
// Created by astefu on 10/8/19.
//

#include "../inlcude/Coffee.h"
#include <string>

Coffee::Coffee(const std::string& firm, const std::string& mark, int year, int roasters)
    : Drink(firm, mark, year), _roasters(roasters) {}
void Coffee::setRoasters(int roasters) {
  _roasters = roasters;
}
int Coffee::getRoasters() const {
  return _roasters;
}
std::string Coffee::to_string(int currentYear) const {
  if (currentYear < _year)
    return "not released yet!";
  else if (currentYear - _year > 3)
    return "be careful!";
  else
    return Drink::to_string() + " " + std::to_string(_roasters);
}
