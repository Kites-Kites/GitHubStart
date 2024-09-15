#include <iostream>
using namespace std;
class A
{
public:
  A() { cout << 1; }
  ~A() { cout << 2; }
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
  A *p = new C();
  delete p;
}

/*在C++中，new C(); 和 new C; 都用于动态分配一个类型为 C 的对象，并返回指向该对象的指针。它们的主要区别在于对象的初始化：

new C();: 这种形式会调用C类的默认构造函数（如果存在的话），然后返回指向已经构造的C类对象的指针。如果C类没有显式定义默认构造函数，编译器会提供一个默认构造函数，它会执行成员变量的默认初始化。

new C;: 这种形式也会分配 C 类对象的内存，但不会调用构造函数。它将返回一个指向未初始化的 C 类对象的指针。如果您尝试访问这个对象的成员变量或调用其方法，行为将是未定义的。*/