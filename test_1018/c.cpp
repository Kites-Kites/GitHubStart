#include <iostream>
using namespace std;

class A
{
public:
  void FuncA()
  {
    cout << 1;
  }
  virtual void FuncB()
  {
    cout << 2;
  }
};

class B : public A
{
public:
  void FuncA()
  {
    A::FuncA();
    cout << 3;
  }
  virtual void FunB()
  {
    cout << 4;
  }
};

int main()
{
  B b;
  A *pa;
  pa = &b;
  A *pa2 = new A;
  pa->FuncA();
  pa->FuncB();
  pa2->FuncA();
  pa2->FuncB();
  delete pa2;
}