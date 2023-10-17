#include <iostream>
using namespace std;

class A
{
public:
  virtual void func(int val = 1) { cout << 1; }
  virtual void test() { func(); }
};
class B : public A
{
public:
  void func(int val = 0) { cout << 2; }
};
int main()
{
  B *p = new B;
  p->test();
}