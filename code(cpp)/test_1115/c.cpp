#include <iostream>

int fun(int a)
{
  a ^= (1 << 5) - 1; //^这玩意儿叫异或，同则为零，异则为一
  // 1<<5=(100000)2
  // 再减1=(011111)2
  // 让它和21对应的二进制（10101）异或
  return a;
}
int main()
{
  int result = fun(21);
  std::cout << result;
}