//
// Created by astefu on 10/8/19.
//

#ifndef ATFLABS_LIST_H
#define ATFLABS_LIST_H

#include "Node.h"

class List {
 private:
  Node* startNode;
  Node* currentNode;

 public:
  List(Node* startNode);
  List(int a, int b);
  ~List();
  void add(int a, int b);
  void remove();
  void printCurrent() const;
  void setNode(int a, int b);
  void swapCurrent();
  void toFirst();
  void next();
  void print() const;
  void find();
};

#endif  // ATFLABS_LIST_H
