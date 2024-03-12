#include <iostream>
#include <functional>                          //std::bind();
void print(const std::string &str, int number) //&
{
  std::cout << str << " " << number << std::endl;
}
int main()
{
  print("hanxian", 211);
  auto function = std::bind(print, "hanhaoxuan", std::placeholders::_1); // std::placeholders::_2...
  function(985);
  return 0;
}