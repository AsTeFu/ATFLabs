//
// Created by astefu on 9/27/19.
//

#ifndef LABA1_FILEREADER_H
#define LABA1_FILEREADER_H

#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include "List.h"

class FileReader {
 public:
  template<typename Type>
  static List<Type>* readArray(const std::string& path) {
    std::ifstream file(path);

    if (!file.is_open()) {
      std::cout << "File can't opens! " << path << std::endl;
      return nullptr;
    }

    auto list = new List<Type>();

    Type input;

    for (file >> input; !file.eof(); file >> input)
      list->push_back(input);

    file.close();
    return list;
  }
};

#endif  // LABA1_FILEREADER_H
