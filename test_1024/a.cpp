#include <iostream>
#include <vector>
#include <string>
using namespace std;
class A
{
public:
  A() { cout << 1; }
  virtual ~A() { cout << 2; }
};
class B
{
public:
  B() { cout << 3; }
  ~B() { cout << 4; }
};
class C : public A, public B
{
public:
  C() { cout << 5; }
  ~C() { cout << 6; }
};

int main()
{
  A *ptr = new C();
  delete ptr;
}