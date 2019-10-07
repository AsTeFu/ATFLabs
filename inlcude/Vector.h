//
// Created by astefu on 10/7/19.
//

#ifndef ATFLABS_VECTOR_H
#define ATFLABS_VECTOR_H

#include <ostream>
template <typename Type>
class Vector {
 private:
  Type x, y, z;

 public:
  Vector() : Vector(0, 0, 0) {}
  Vector(const Type& x, const Type& y, const Type& z) : x(x), y(y), z(z) {}
  Type getX() const {
    return x;
  }
  Type getY() const {
    return y;
  }
  Type getZ() const {
    return z;
  }
  void set(const Type& x, const Type& y, const Type& z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }
  Vector<Type> operator+(const Vector<Type>& rhs) {
    return Vector<Type>(x + rhs.getX(), y + rhs.getY(), z + rhs.getZ());
  }
  friend std::ostream& operator<<(std::ostream& os, const Vector& vector) {
    os << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return os;
  }
};

#endif  // ATFLABS_VECTOR_H
