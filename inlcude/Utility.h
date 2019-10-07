//
// Created by astefu on 10/7/19.
//

#ifndef ATFLABS_UTILITY_H
#define ATFLABS_UTILITY_H

#include <string>

class Utility {
  static bool tryToInt(const std::string& str, int* num);

  static int getNumber(const std::string& name);
};

#endif  // ATFLABS_UTILITY_H
