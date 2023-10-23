#include <iostream>
using namespace std;

// https://www.acwing.com/problem/content/description/4560/
// 求最长上升子序列;
const int N = 1e6 + 10;
int main()
{
  int n;
  int ans = -1;
  cin >> n;
  int a[N], p[N];
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++)
  {
    p[i] = 1;
    for (int j = 1; j < i; j++)
    {
      if (a[i] > a[j])
        p[i] = max(p[i], p[j] + 1);
      ans = max(ans, p[i]);
    }
  }
  cout << ans << endl;
  return 0;
}