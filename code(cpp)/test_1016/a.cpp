#include <iostream>
using namespace std;
class A
{
public:
  virtual void print() { cout << "A::print()" << endl; }
};
class B : public A
{
public:
  virtual void print()
  {
    cout << "B::print()" << endl;
  }
};
class C : public A
{
public:
  virtual void print()
  {
    cout << "C::print()" << endl;
  }
};
void print(A a)
{
  a.print();
}
void Print(A *a)
{
  a->print();
}
int main()
{
  A a, *aa, *ab, *ac;
  B b;
  C c;
  aa = &a;
  ab = &b;
  ac = &c;
  a.print();
  b.print();
  c.print();
  aa->print(); /*是使用基类指针调用虚函数的情况，因此它们会触发多态性，根据指针指向的对象类型来调用适当的虚函数。*/
  ab->print();
  ac->print();
  print(a); /*函数 print 的参数是按值传递的。
在 C++ 中，当您传递一个派生类的对象给一个函数，如果函数的参数是基类类型，对象会被切片（slice）成基类类型。这意味着传递给函数的对象的派生类部分将被丢弃，只保留基类部分。（基类部分的数据成员和虚函数表（vtable）信息被传递，而派生类特有的部分被丢弃）因此，即使您传递的是 B 或 C 类的对象，它们在 print 函数中的参数都被视为 A 类型的对象。像这3行，是不会实现多态性的，所以不应该传值而应该传引用*/
  print(b);
  print(c);
  Print(&a);
  Print(&b);
  Print(&c);
}