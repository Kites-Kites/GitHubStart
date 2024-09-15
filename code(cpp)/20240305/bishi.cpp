#include <iostream>
// 不用加减乘除做加法
//^是通则为零，&是全一才一
int add(int &a, int &b)
{
  while (true)
  {
    int x = a ^ b;
    int y = (a & b) << 1;
    if (!y)
    {
      return x;
    }
    b = y;
    a = x;
  }
}
int main()
{
  int a, b;
  std::cin >> a >> b;
  int sum = add(a, b);
  std::cout << sum << std::endl;
  return 0;
}
