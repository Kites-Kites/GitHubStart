// 牛客_完全数计算

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> foo(int n)
{
  vector<int> v;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      v.push_back(i);
      if (n == i * i)
        continue;
      v.push_back(n / i);
    }
  }
  return v;
}

int main()
{
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << 0 << endl;
    return 0;
  }

  int count = 0;
  for (int i = 2; i <= n; i++)
  {
    vector<int> ans;
    ans = foo(i);
    int sum = 0;
    for (int j = 0; j < ans.size(); j++)
    {
      sum += ans[j];
    }
    if (sum + 1 == i)
    {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}

// code from others;

#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
  int cnt = 0;
  if (n > 500000 || n <= 0)
    return -1;
  else
  {

    for (int i = 2; i <= n; i++)
    {
      int sum = 0;
      for (int j = 2; j < sqrt(i); j++)
      {
        if (i % j == 0)
        {
          if (i / j == j)
            sum += j;
          else
          {
            sum += j;
            sum += (i / j);
          }
        }
      }
      if (sum + 1 == i)
        cnt++;
    }
  }
  return cnt;
}
int main()
{
  int n;
  while (cin >> n)
  {
    cout << fun(n) << endl;
  }
  system("pause");
  return 0;
}
