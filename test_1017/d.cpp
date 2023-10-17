#include <iostream>
using namespace std;
class Base
{
public:
  Base(int j) : i(j) {}
  virtual ~Base() {}
  void fun1()
  {
    i *= 10;
    fun2();
  }
  int getValue()
  {
    return i;
  }

protected:
  virtual void fun2() { i++; }
  int i;
};

class Child : public Base
{
public:
  Child(int j) : Base(j) {}
  void fun1()
  {
    i *= 100;
    fun2();
  }

protected:
  void fun2()
  {
    i += 2;
  }
};

int main()
{
  Base *pb = new Child(1);
  pb->fun1(); // fun1();并不构成多态，故根据调用者的类型来决定调用父类还是子类，题中描述显然是Base类;再在fun1();中调用fun2();因为它是虚函数且被重写，所以调用子类中的fun2();
  cout << pb->getValue() << endl;
  delete pb;
}