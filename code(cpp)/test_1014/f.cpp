// 输入一个偶数，输出两个素数（升序）且这两个素数的差值是所有可能的结果中离得最近的
#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

// 切记：for循环的表达式2中的“<=”而不是“，”
// isPrime(int x);如果x==2的话，是返回true;不进入for循环
bool isPrime(int x)
{
  for (int i = 2; i <= sqrt(x); i++)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
  return true;
}

int abs(int a, int b)
{
  return a > b ? a - b : b - a;
}
int main()
{
  int e;
  cin >> e;
  vector<int> v;
  for (int i = 2; i <= e / 2; i++)
  {
    int j = e - i;
    if (isPrime(i) && isPrime(j))
    {
      int ans = abs(j, i);
      v.push_back(ans);
    }
  }
  auto min_it = min_element(v.begin(), v.end());
  for (int i = 2; i <= e / 2; i++)
  {
    if (isPrime(i) && isPrime(e - i) && abs(i, e - i) == *min_it)
    {
      cout << i << endl
           << e - i;
    }
  }
}