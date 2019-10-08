//
// Created by astefu on 10/8/19.
//

#include "../inlcude/TaylorCos.h"
#include <math.h>

double TaylorCos::calculate(int a, int n, double x) {
  /*
  double value = 0;
  for (int i = 0; i < n; ++i) {
    value += pow<int>(a, i) * pow<double>(x - x0, i) * cos(x0 * a + (i * 3.14) * 0.5) / fact(i);
  }
  return value;
  */

  double value = 0;
  for (int i = 0; i < n; ++i) {
    value += pow<int>(-1, i) * pow<double>(a * x, 2 * i) / fact(2 * i);
  }
  return value;
}
std::ostream& operator<<(std::ostream& os, const TaylorCos& cos) {
  return os;
}
