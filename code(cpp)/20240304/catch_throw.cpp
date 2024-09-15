#include <iostream>

double Division(int a, int b)
{
  if (b == 0)
  {
    throw "error";
  }
  else
  {
    return (double)a / (double)b;
  }
}
void Func()
{
  int len, time;
  std::cin >> len >> time;
  std::cout << Division(len, time) << std::endl;
}
int main()
{
  try
  {
    Func();
  }
  catch (const char *errmsg)
  {
    std::cout << errmsg << std::endl;
  }
  return 0;
}

// try catch
// 标识了noexcept的函数是不会抛异常的？不是吧，只是一个标识，有的是直接抛异常，有的是间接抛异常
// 一般，构造函数/析构函数一般不要抛异常，会有异常安全问题
// 特别是malloc/free new/delete  fopen/fclose lock/unlock

// 断言在release下不生效？
// Java的垃圾回收机制比C++做的好，它是跑在虚拟机上的，
// new也是会抛异常的