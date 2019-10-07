//
// Created by astefu on 10/7/19.
//

#ifndef ATFLABS_APPLICATION_H
#define ATFLABS_APPLICATION_H

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

#endif  // ATFLABS_APPLICATION_H
