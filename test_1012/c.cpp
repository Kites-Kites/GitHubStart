#include <iostream>
using namespace std;

template <class T>
T fun(T x, T y)
{
  return x * x + y * y;
}
class myClass
{
public:
  myClass() { cout << 1; }
};

int main()
{
  myClass(*p)[3]; // 这是一个声明，不是创建对象，所以不会调用构造函数
  myClass obj[3];
  myClass(*p)[3] = &obj; // 一个指向数组的指针，这个数组中装的是myClass对象
}