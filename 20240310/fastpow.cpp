#include <iostream>
// 快速幂模板
// long long n 可以考虑用usigned long long;
long long fastpow(long long a, long long n)
{
  long long ans = 1;
  while (n)
  {
    if (n & 1)
    {
      ans *= a;
    }
    a *= a;
    n = n >> 1;
  }
  return ans;
}
int main()
{
  long long a, n;
  while (std::cin >> a >> n)
  {
    if (n < 0)
    {
      std::cout << "Error!" << std::endl;
      continue;
    }
    long long ans = fastpow(a, n);
    std::cout << ans << std::endl;
  }
  return 0;
}