//
// Created by astefu on 10/8/19.
//

#ifndef ATFLABS_COFFEE_H
#define ATFLABS_COFFEE_H

#include "../inlcude/Drink.h"

class Coffee : public Drink {
 private:
  int _roasters;  // типа obzharka

 public:
  Coffee(const std::string& firm, const std::string& mark, int year, int roasters);
  void setRoasters(int roasters);
  int getRoasters() const;
  std::string to_string(int currentYear) const override;
};

#endif  // ATFLABS_COFFEE_H
