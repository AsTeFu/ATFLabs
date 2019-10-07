//
// Created by astefu on 10/7/19.
//

#ifndef ATFLABS_TEA_H
#define ATFLABS_TEA_H

#include "../inlcude/Drink.h"

class Tea : public Drink {
 private:
  int _type;

 public:
  Tea(const std::string& firm, const std::string& mark, int year, int type);
  std::string to_string(int currentYear) const override;
  void setType(int type);
  int getType() const;
};

#endif  // ATFLABS_TEA_H
