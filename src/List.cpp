//
// Created by astefu on 10/8/19.
//

#include "../inlcude/List.h"
#include <iostream>
List::List(Node* startNode) : startNode(startNode), currentNode(startNode) {}
List::List(int a, int b) : List(new Node(a, b)) {}

void List::add(int a, int b) {
  Node* newNode = new Node(a, b);

  if (startNode == nullptr) {
    startNode = newNode;
    currentNode = newNode;
    return;
  }
  newNode->setNext(currentNode->getNext());
  currentNode->setNext(newNode);
  currentNode = newNode;
}
void List::remove() {
  if (startNode == nullptr) return;

  if (startNode == currentNode) {
    // Самое красивое условие, поэтому пусть оно тут останется, все равно его никто не увидит
    // Но если ты увидел(а) это, то лучше переши все это дело
    Node* next = currentNode->getNext();
    delete currentNode;
    startNode = next;
    currentNode = next;
    return;
  }

  Node* localStart = startNode;
  while (localStart->getNext() != currentNode) localStart = localStart->getNext();
  Node* previous = localStart;
  Node* next = currentNode->getNext();
  delete currentNode;
  previous->setNext(next);
  currentNode = previous;
}
void List::printCurrent() const {
  if (startNode == nullptr) return;
  std::cout << "[" << currentNode->getA() << ", " << currentNode->getB() << "]" << std::endl;
}
void List::setNode(int a, int b) {
  currentNode->setA(a);
  currentNode->setB(b);
}
void List::swapCurrent() {
  int tmp = currentNode->getA();
  currentNode->setA(currentNode->getB());
  currentNode->setB(tmp);
}
void List::toFirst() {
  currentNode = startNode;
}
void List::next() {
  if (startNode == nullptr) return;
  if (currentNode->getNext()) currentNode = currentNode->getNext();
}
void List::print() const {
  Node* temp = startNode;
  while (temp) {
    if (temp == currentNode)
      std::cout << "[" << currentNode->getA() << ", " << currentNode->getB() << "] ";
    else
      std::cout << "(" << temp->getA() << ", " << temp->getB() << ") ";
    temp = temp->getNext();
  }
}
void List::find() {
  Node* temp = startNode;
  while (temp) {
    if (temp->getA() > 0 && temp->getB() > temp->getA()) break;
    temp = temp->getNext();
  }

  if (temp)
    currentNode = temp;
  else
    std::cout << "Not found" << std::endl;
}
List::~List() {
  while (startNode) {
    Node* node = startNode->getNext();
    delete (startNode);
    startNode = node;
  }
}
