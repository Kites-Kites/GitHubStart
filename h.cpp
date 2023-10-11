#include <iostream>
using namespace std;

class A
{
private:
  int val;

public:
  A(int value) : val(value) {}
  A &operator++() // 前置++
  {
    ++val;
    return *this;
  }
  A operator++(int) // 后置++
  {
    A temp(*this);
    ++val;
    return temp;
  }
};