//
// Created by astefu on 10/8/19.
//

#include "../inlcude/TaylorCos.h"
#include <string>

std::ostream& operator<<(std::ostream& os, const TaylorCos& cos) {
  for (int i = 0; i < cos.n; ++i) {
    if (i % 2 == 1)
      os << " -";
    else if (i > 0)
      os << " +";
    os << "(";
    if (2 * i != 0)
      os << cos.a << "x^[" << 2 * i << "]";
    else
      os << "1";
    if (2 * i > 1) os << "/" << 2 * i << "!";
    os << ") ";
  }

  return os;
}

TaylorCos::TaylorCos(int n, int a) : n(n), a(a) {}
