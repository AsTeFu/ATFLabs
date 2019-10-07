//
// Created by astefu on 10/7/19.
//

#include "../inlcude/Numbers.h"

Numbers::Numbers(int x, int y) : x(x), y(y) {}

int Numbers::getX() const {
  return x;
}
void Numbers::setX(int x) {
  this->x = x;
}
int Numbers::getY() const {
  return y;
}
void Numbers::setY(int y) {
  this->y = y;
}
void Numbers::set(int x, int y) {
  setX(x);
  setY(y);
}
int Numbers::subtraction() const {
  return x - y;
}
float Numbers::average() const {
  return static_cast<float>(x + y) * 0.5f;
}
