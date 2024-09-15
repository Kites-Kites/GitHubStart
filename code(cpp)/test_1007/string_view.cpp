#include <iostream>
#include <string_view>
//-std=c++17
int main()
{
  std::string str = "Hello,world!";
  std::string_view view(str);
  std::cout << view << std::endl;
  std::string_view subview = view.substr(0, 5);
  std::cout << subview << std::endl;
}