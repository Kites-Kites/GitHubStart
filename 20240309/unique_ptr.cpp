#include <iostream>
class Bar
{
public:
  Bar() {}
};
void test_memory_leak(bool flag)
{
  auto ptr = new Bar();
  if (flag)
  {
    // if you not write delete ptr and you will get memory leak;So you should learn unique_ptr;
    // 如果你在这里return了，或者在下面delete ptr;那里之前你就因为一个嵌套的一个函数抛了异常而退出，那么就会内存泄漏;
    return;
  }
  delete ptr;
  return;
}
int main()
{
  test_memory_leak(true);
  return 0;
}