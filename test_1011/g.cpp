#include <iostream>
using namespace std;
class MyClass
{
public:
  MyClass(int i = 0) { cout << 1; }
  MyClass(const MyClass &x) { cout << 2; } // 拷贝构造函数
  MyClass &operator=(const MyClass &x)
  {
    cout << 3;
    return *this;
  }
  ~MyClass() { cout << 4; }
};
int main()
{
  MyClass obj1(1), obj2(2), obj3(obj1);
  return 0;
}