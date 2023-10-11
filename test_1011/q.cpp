#include <iostream>
using namespace std;
class A
{
public:
  A() { cout << 1; }
  A(const A &a) {}
  // 拷贝构造函数的调用场景：
  //  当使用一个对象初始化另一个对象时。
  //  当对象通过值传递给函数或从函数返回时。
};
int main()
{
  A *b[6]; // 声明了一个指针数组，每个元素都指向类A的对象
  for (int i = 0; i < 6; i++)
  {
    b[i] = new A;
  }
  cout << endl;
  A a[5]; // 创建一个数组，数组名叫a,包含5个A对象

  return 0;
}