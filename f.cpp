// 求最小公倍数
// GCD：最大公约数
// LCM:最小公倍数
// LCM=两数乘积/GCD
// GCD(a,b)=GCD(b,a%b);___直到第二个数是0的时候，return第一个数即可
#include <iostream>
using namespace std;

int GCD(int a, int b) // GCD:最大公约数
{
  if (!b)
    return a; // 当 b 变为 0 时，a 就是两个整数的最大公约数（GCD）
  return GCD(b, a % b);
}
int LCM(int a, int b)
{
  int result = GCD(a, b);
  return a * b / result;
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << LCM(a, b) << endl;
  return 0;
}