#include <iostream>
#include <memory>

void customDeleter(int *ptr)
{
  std::cout << 1;
  delete ptr;
}
int main()
{
  std::unique_ptr<int, decltype(&customDeleter)> p((new int(9)), customDeleter); // 当你有一天想要改动所有权时，我就释放9空间
  std::cout << *p << std::endl;
  // 使用 reset() 函数重新指定资源和删除器
  p.reset(new int(8));
  std::cout << *p << std::endl; // 8
}