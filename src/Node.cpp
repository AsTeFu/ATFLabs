//
// Created by astefu on 10/8/19.
//

#include "../inlcude/Node.h"
Node::Node(int a, int b, Node *next) : a(a), b(b), next(next) {}
Node::Node(int a, int b) : Node(a, b, nullptr) {}

int Node::getA() const {
  return a;
}
void Node::setA(int a) {
  Node::a = a;
}
int Node::getB() const {
  return b;
}
void Node::setB(int b) {
  Node::b = b;
}
Node *Node::getNext() const {
  return next;
}
void Node::setNext(Node *next) {
  Node::next = next;
}

