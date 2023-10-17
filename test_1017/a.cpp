#include <iostream>
using namespace std;
// class A
// {
// private:
//   int a;

// public:
//   A() { cout << "A constructor!" << endl; }
// };
// class B : public A
// {
// private:
//   int a;

// public:
//   const int b;
//   A &c;
//   static const char *d;
//   B *e;
// };

// 请完成两个类的构造函数的实现：

class A
{
private:
  int a;

public:
  A(int val)
  {
    a = val;
    cout << "A construcor!" << endl;
  }
  int getA() const { return a; }
};
class B
{
public:
  const int b; // b一旦被赋值，就不可以被修改;
  A &c;
  static const char *d;
  B *e;
  B(int val, A &other)
      : b(val), c(other)
  {
    e = nullptr;
    cout << "B constructor!" << endl;
  }
  ~B()
  {
    delete e;
    cout << "B destructor!" << endl;
  }
};
const char *B::d = "hello";

int main()
{
  A obj1(5);
  B obj2(7, obj1);
}
