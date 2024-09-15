#include <iostream>
using namespace std;
/*虚函数作用：实现了继承性*/

class A
{
public:
  virtual void fun() = 0;
};
class B : public A
{
public:
  void fun() override {}
};
A *fun() // 抽象类的指针可以作为函数返回值，返回一个指针，指向B类对象;
{
  return new B();
}
int main()
{
  A *obj = fun();
  obj->fun();
  delete obj; // important!
}