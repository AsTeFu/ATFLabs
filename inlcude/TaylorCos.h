//
// Created by astefu on 10/8/19.
//

#ifndef ATFLABS_TAYLORCOS_H
#define ATFLABS_TAYLORCOS_H

#include <ostream>
class TaylorCos {
 public:
  template<typename T>
  static T pow(T value, int step) {
    if (step == 0) return 1;
    int r = 1;
    for (int i = 0; i < step; i++) r *= value;
    return r;
  }
  static long fact(int n) {
    if (n == 0) return 1;
    long value = 1;
    for (int i = 1; i <= n; ++i) value *= i;
    return value;
  }

 public:
  static double calculate(int a, int n, double x);

  friend std::ostream& operator<<(std::ostream& os, const TaylorCos& cos);
};

#endif  // ATFLABS_TAYLORCOS_H
