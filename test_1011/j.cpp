#include <iostream>
using namespace std;

class A
{
public:
  static int a;
};
int A::a = 0;
int main()
{
  A a1;
  A a2;
  cout << a1.a << " " << a2.a << endl; // 可见静态数据成员时对象所共有的
  A::a = 1;
  cout << A::a << endl; // 要引用时，记得加上类名和作用域符号
}
