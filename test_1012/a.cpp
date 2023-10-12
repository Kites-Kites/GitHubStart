#include <iostream>
using namespace std;

class myClass
{
public:
  void foo();
};

void myClass::foo()
{
  delete this; // 删除调用的this指针
               // 但是在fun();结束后依然会释放函数栈帧，同一块内存释放了2次_UB
}
void fun()
{
  myClass *a = new myClass();
  a->foo();
}
int main()
{
  fun();
}