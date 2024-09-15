#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Niuke_小易的升级之路
int GCD(int a, int b)
{
  int ans = -1;
  if (a > b)
  {
    swap(a, b);
  }
  for (int i = 1; i <= a; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      ans = max(ans, i);
    }
  }
  return ans;
}
int main()
{
  int count;
  while (cin >> count)
  {
    int c;
    cin >> c;
    vector<int> v(count);
    for (int i = 0; i < count; i++)
    {
      cin >> v[i]; // error!(在这里，你尝试为一个空的 vector v 分配元素，但没有为其分配足够的空间，因此会导致未定义行为。你可以通过使用 push_back 方法向 vector 中添加元素，或者在创建 vector 时指定初始大小来解决这个问题。)
    }
    for (auto e : v)
    {
      if (e <= c)
      {
        c += e;
      }
      else
      {
        c += GCD(e, c);
      }
    }
    cout << c << endl;
  }
  return 0;
}