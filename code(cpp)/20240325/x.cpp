#include<iostream>
int main()
{
  // int a=b=c=10;//error!不符合先定义后使用原则
  int a, b, c;
  a = b = c = 10;
  std::cout << a << b << c << std::endl;
  return 0;
}