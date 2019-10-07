//
// Created by astefu on 10/7/19.
//

#ifndef ATFLABS_NUMBERS_H
#define ATFLABS_NUMBERS_H

class Numbers {
 private:
  int x;
  int y;

 public:
  Numbers(int x, int y);
  int getX() const;
  void setX(int x);
  int getY() const;
  void setY(int y);
  void set(int x, int y);
  int subtraction() const;
  float average() const;
};

#endif  // ATFLABS_NUMBERS_H
