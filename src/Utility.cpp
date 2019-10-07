//
// Created by astefu on 10/7/19.
//

#include "../inlcude/Utility.h"
#include <iostream>
#include <string>

bool Utility::tryToInt(const std::string& str, int* num) {
  try {
    *num = std::stoi(str);
    return true;
  } catch (...) {
    return false;
  }
}
int Utility::getNumber(const std::string& name) {
  int num;
  std::string buffer;
  do {
    std::cout << name;
    std::cin >> buffer;
  } while (!tryToInt(buffer, &num));
  return num;
}
