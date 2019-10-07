//
// Created by astefu on 10/7/19.
//

#include "../inlcude/Drink.h"
#include <string>

Drink::Drink(std::string firm, std::string mark, int year)
    : _firm(std::move(firm)), _mark(std::move(mark)), _year(year) {}
std::string Drink::to_string() const {
  return _firm + " " + _mark + " " + std::to_string(_year);
}
void Drink::setFirm(const std::string& firm) {
  _firm = firm;
}
void Drink::setMark(const std::string& mark) {
  _mark = mark;
}
void Drink::setYear(int year) {
  Drink::_year = year;
}
