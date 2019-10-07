//
// Created by astefu on 9/19/19.
//

#ifndef ATFLABS_UTILITY_H
#define ATFLABS_UTILITY_H

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

  static int getNumber(const std::string& name) {
    int num;
    std::string buffer;
    do {
      std::cout << name;
      std::cin >> buffer;
    } while (!tryToInt(buffer, &num));
    return num;
  }
};

#endif  // ATFLABS_UTILITY_H
