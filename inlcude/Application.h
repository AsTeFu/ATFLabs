//
// Created by astefu on 10/7/19.
//

#ifndef LABA1_APPLICATION_H
#define LABA1_APPLICATION_H

#include <string>
#include "../inlcude/List.h"

class Application {
 private:
  List<unsigned char>* list;

 public:
  Application(List<unsigned char>* list) : list(list) {}
  void insertionSort();
  void selectionSort();
  void print() const;
};

#endif  // LABA1_APPLICATION_H
