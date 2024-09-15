#include<iostream>
#include<iomanip>
/*以文本形式即true/false形式输出布尔值更直观*/
int main()
{
  bool b = true;

  std::cout<<std::boolalpha;//启用 boolalpha标志
  std::cout<<b<<std::endl;//print true
  std::cout<<std::noboolalpha;//禁用boolalpha标志
  std::cout<<b<<std::endl;//print 1

  return 0;
}