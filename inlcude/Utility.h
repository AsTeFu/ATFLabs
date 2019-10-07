//
// Created by astefu on 9/19/19.
//

#ifndef ATFLABS_UTILITY_H
#define ATFLABS_UTILITY_H

#include <stdexcept>
#include <string>

class Utility {
 public:
  static bool tryToInt(const std::string& str, int* num) {
    try {
      *num = std::stoi(str);
      return true;
    } catch (...) {
      return false;
    }
  }
};

#endif  // ATFLABS_UTILITY_H
