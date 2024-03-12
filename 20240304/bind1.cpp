#include <iostream>
#include <functional> //std::bind();
void print(const std::string &str)//&
{
  std::cout << str << std::endl;
}

int main()
{
  print("hanxian");
  auto function = std::bind(print, "hanhaoxuan");
  function();
  return 0;
}