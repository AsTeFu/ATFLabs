//
// Created by astefu on 10/8/19.
//

#ifndef ATFLABS_NODE_H
#define ATFLABS_NODE_H

class Node {
 private:
  int a, b;
  Node* next;

 public:
  Node(int a, int b, Node* next);
  Node (int a, int b);
  int getA() const;
  void setA(int a);
  int getB() const;
  void setB(int b);
  Node* getNext() const;
  void setNext(Node* next);
};

#endif  // ATFLABS_NODE_H
