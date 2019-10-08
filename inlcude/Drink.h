//
// Created by astefu on 10/7/19.
//

#ifndef ATFLABS_DRINK_H
#define ATFLABS_DRINK_H

#include <string>
#include <utility>

class Drink {
 protected:
  std::string _firm;
  std::string _mark;
  int _year;

 public:
  Drink(std::string firm, std::string mark, int year);
  std::string to_string() const;
  void setFirm(const std::string& firm);
  void setMark(const std::string& mark);
  void setYear(int year);
};

#endif  // ATFLABS_DRINK_H
