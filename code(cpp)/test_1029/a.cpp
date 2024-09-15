#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int start = 0, len = 0;
  for (int i = 2; i < sqrt(n) + 1; i++)
  {
    int temp = 1;
    for (int j = i; j * temp <= n; j++)
    {
      temp *= j;                            // temp从i开始试验
      if (n % temp == 0 && j - i + 1 > len) // 如果temp是因数，且因数序列比之前的还大，那就改变start和len;
      {
        start = j;
        len = j - i + 1;
      }
    }
  }
  if (start == 0)
  {
    cout << 1 << endl
         << n;
  }
  else
  {
    cout << len << endl
         << start;
    for (int i = start + 1; i < start + len; i++)
    {
      cout << "*" << i; // not cout<<i<<"*";那样会出现3*4*5*这样不符合要求的结果
    }
  }
  return 0;
}