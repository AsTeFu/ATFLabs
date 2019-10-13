//
// Created by astefu on 10/8/19.
//

#ifndef ATFLABS_TAYLORCOS_H
#define ATFLABS_TAYLORCOS_H

#include <ostream>
class TaylorCos {
 private:
  int n, a;
 public:
  TaylorCos(int n, int a);
  friend std::ostream& operator<<(std::ostream& os, const TaylorCos& cos);
};

#endif  // ATFLABS_TAYLORCOS_H
