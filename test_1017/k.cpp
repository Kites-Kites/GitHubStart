#include <iostream>
using namespace std;
class A
{
public:
  void foo()
  {
    cout << 1;
  }
  virtual void fun()
  {
    cout << 2;
  }
};
class B : public A
{
public:
  void foo()
  {
    cout << 3;
  }
  void fun()
  {
    cout << 4;
  }
};

int main()
{
  A a;
  B b;
  A *ptr = (A *)&b;
  ptr->foo();
  ptr->fun();
}