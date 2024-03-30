#include<iostream>
int main()
{
  int a = 1;
  int *p = &a;
  std::cout << sizeof(p) << std::endl;
  std::cout << sizeof(int) << std::endl;
  std::cout << sizeof(a) << std::endl;
  int b = 2;
  b *= a + 1; // 结果等价于b=b*(a+1);但是底层计算不一样
  std::cout << b << std::endl;
}