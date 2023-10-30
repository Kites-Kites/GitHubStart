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
      temp *= j;
      if (n % temp == 0 && j - i + 1 > len)
      {
        start = j;
        len = j - i + 1;
      }
    }
  }
  if (start == 1)
  {
    cout << 1 << endl
         << n;
  }
  else
  {
    cout << len << endl
         << start;
    for (int i = start + 1; i < len + start; i++)
    {
      cout << '*' << i;
    }
  }
  return 0;
}