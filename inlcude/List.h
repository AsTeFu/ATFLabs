//
// Created by astefu on 9/27/19.
//

#ifndef ATFLABS_LIST_H
#define ATFLABS_LIST_H

#include <glob.h>
#include <utility>

template<typename Type>
class List {
 private:
  size_t _current;
  size_t _capacity;
  Type* _list;

 public:
  explicit List(size_t capacity) : _current(0), _capacity(capacity) {
    _list = new Type[capacity];
  }
  List() : List(5) {}
  ~List() {
    delete[](_list);
  }

  void push_back(Type value) {
    if (_current == _capacity) {
      _capacity *= 2;
      Type* list = new Type[_capacity];
      for (size_t i = 0; i < _current; ++i) list[i] = std::move(_list[i]);
      std::swap(list, _list);
      delete[](list);
    }

    _list[_current++] = std::move(value);
  }
  void set(int index, Type value) {
    _list[index] = std::move(value);
  }
  const Type& at(int index) const {
    return _list[index];
  }
  size_t size() const {
    return _current;
  }
};

#endif  // ATFLABS_LIST_H
