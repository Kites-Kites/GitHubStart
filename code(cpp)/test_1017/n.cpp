#include <iostream>
using namespace std;
struct A
{
  void foo() { cout << 1; }
  virtual void bar() { cout << 2; }
  A() { bar(); } /*由于在构造函数内部，虚函数机制不会按预期工作，因此调用的是 A 类版本的 bar*/
                 /*派生类对象构造期间进入基类的构造函数时，对象类型变成了基类类型，而不是派生类类型。 同样，进入基类析构函数时，对象也是基类类型。*/
                 /*当基类的构造函数被调用时，派生类的部分尚未构造，因此对象还没有完全成为派生类类型。这是为了确保对象在构造期间保持一致性和完整性。
    详见《Effective C++》
*/
};
struct B : A
{
  void foo() { cout << 3; }
  void bar() { cout << 4; }
};
int main()
{
  A *p = new B;
  p->foo();
  p->bar();
}