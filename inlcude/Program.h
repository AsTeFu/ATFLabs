//
// Created by astefu on 10/8/19.
//

#ifndef ATFLABS_PROGRAM_H
#define ATFLABS_PROGRAM_H

#include <functional>
#include <map>
#include "List.h"

using std::bind;
using std::function;
using std::make_pair;

class Program {
 private:
  std::map<int, function<void()>> _menuItems;
  std::map<int, std::string> _menuNames;

  List _list;

  void add();
  void remove();
  void printCurrent();
  void setNode();
  void swapCurrent();
  void toFirst();
  void next();
  void find();

 public:
  Program();
  void invoke(int i);
  void printMenu();
  void print();
};

#endif  // ATFLABS_PROGRAM_H
