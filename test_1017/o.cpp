#include <iostream>
using namespace std;
class A
{
public:
  void f() { cout << 1; }
};
class B : public A
{
public:
  virtual void f()
  {
    cout << 2;
  }
};
int main()
{
  A *p = new B;
  p->f();
  delete p;
}