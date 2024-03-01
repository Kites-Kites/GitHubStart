#include <iostream>
template <class T>
class Vector
{
private:
  T *_PData;
  size_t _size;
  size_t _capacity;

public:
  Vector(size_t capacity = 10)
      : _pDate(new T[capacity]), _size(0), _capacity(capacity) {}
  ~Vector();
  void Pushback(const T &data);
  void Popback();
  size_t Size(return _size);
  T &operate[](size_t pos)
  {
    assert(pos < _size);
    return _pData[pos];
  }
};

template <class T>
Vector<T>::~Vector()
{
  if (_pData)
    delete[] _pData;
  _size = _capacity = 0;
}

// double a=9.14;
// float b = 3.14f;
// like this!