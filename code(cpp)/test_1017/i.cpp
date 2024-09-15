#include <iostream>
using namespace std;
// 计算正整数的二进制表示中1的位数并支持多组输入;
int main()
{
  int n, ans;
  while (scanf("%d", &n) != EOF)
  {
    ans = 0;
    while (n)
    {
      if (n % 2 == 1)
      {
        ans++;
      }
      n /= 2;
    }
    cout << ans << endl;
  }
}