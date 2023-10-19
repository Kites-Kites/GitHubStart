#include <iostream>
using namespace std;
class Base
{
public:
  Base() { echo(); } /*在构造基类对象时，派生类部分尚未构造完成，因此在基类的构造函数中无法调用派生类的虚拟函数。这是因为派生类对象的构造在基类构造之后才会发生。*/
  virtual void echo() { cout << "Base" << endl; }
};
class Derived : public Base
{
public:
  Derived() { echo(); }
  virtual void echo() { cout << "Derived" << endl; }
};
int main()
{
  Base *p = new Derived();
  p->echo();
}