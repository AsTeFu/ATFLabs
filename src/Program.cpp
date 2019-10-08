//
// Created by astefu on 10/8/19.
//

#include "../inlcude/Program.h"
#include <iostream>
#include "../inlcude/Utility.h"

Program::Program() : _list(Utility::getNumber("Input a: "), Utility::getNumber("Input b: ")) {
  _menuItems.insert(make_pair(1, bind(&Program::add, this)));
  _menuItems.insert(make_pair(2, bind(&Program::remove, this)));
  _menuItems.insert(make_pair(3, bind(&Program::printCurrent, this)));
  _menuItems.insert(make_pair(4, bind(&Program::setNode, this)));
  _menuItems.insert(make_pair(5, bind(&Program::toFirst, this)));
  _menuItems.insert(make_pair(6, bind(&Program::next, this)));
  _menuItems.insert(make_pair(7, bind(&Program::print, this)));
  _menuItems.insert(make_pair(8, bind(&Program::find, this)));

  _menuNames = {
      {1, "Add new node"},
      {2, "Remove current node"},
      {3, "Print current node"},
      {4, "Update current node"},
      {5, "To first node"},
      {6, "Next node"},
      {7, "Print all"},
      {8, "Find"},
      {9, "Exit"},
  };
}

void Program::invoke(int i) {
  _menuItems.at(i)();
}

void Program::printMenu() {
  for (const auto& name : _menuNames) std::cout << name.first << ". " << name.second << std::endl;
}
void Program::add() {
  int a = Utility::getNumber("Input a: ");
  int b = Utility::getNumber("Input b: ");
  _list.add(a, b);
}
void Program::remove() {
  _list.remove();
}
void Program::printCurrent() {
  std::cout << "Current node ";
  _list.printCurrent();
}
void Program::setNode() {
  int a = Utility::getNumber("Input new a: ");
  int b = Utility::getNumber("Input new b: ");
  _list.setNode(a, b);
}
void Program::swapCurrent() {
  _list.swapCurrent();
}
void Program::toFirst() {
  _list.toFirst();
}
void Program::next() {
  _list.next();
}
void Program::print() {
  std::cout << "List: ";
  _list.print();
}
void Program::find() {
  _list.find();
}
