//
// Created by astefu on 10/7/19.
//

#include "../inlcude/Application.h"
#include <iostream>

void Application::print() const {
  for (size_t i = 0; i < list->size(); ++i) std::cout << list->at(i) << " ";
  std::cout << std::endl;
}

void Application::insertionSort() {
  unsigned int tmp;
  int index;

  for (int counter = 1; counter < static_cast<int>(list->size()); counter++) {
    tmp = list->at(counter);
    index = counter - 1;

    while (index >= 0 && list->at(index) < tmp) {
      list->set(index + 1, list->at(index));
      list->set(index, tmp);
      index--;
    }
  }
}

void Application::selectionSort() {
  int i, j, k;
  unsigned int x;

  for (i = 0; i < static_cast<int>(list->size()) - 1; ++i) {
    k = i;
    x = list->at(i);

    for (j = i + 1; j < static_cast<int>(list->size()); j++) {
      if (list->at(j) > x) {
        k = j;
        x = list->at(j);
      }
    }

    list->set(k, list->at(i));
    list->set(i, x);
  }
}
