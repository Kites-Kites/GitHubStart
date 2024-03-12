#include <memory>
#include <iostream>

void newTest()
{
  std::unique_ptr<int> p3(new int(90));
  std::unique_ptr<int> p4(std::move(p3));
  std::cout << p4.get() << " " << *p4 << std::endl; // 输出原始指针地址//智能指针不能直接输出地址
}

int main()
{
  newTest();
  return 0;
}
