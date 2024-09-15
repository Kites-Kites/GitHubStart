#include <iostream>
using namespace std;
class A
{
public:
  A() { p(); }
  virtual void p() { cout << "A"; }
  virtual ~A() { p(); }
};
class B : public A
{
public:
  B() { p(); }
  void p() { cout << "B"; }
  ~B() { p(); }
};
int main()
{
  A *a = new B();
  delete a;
}