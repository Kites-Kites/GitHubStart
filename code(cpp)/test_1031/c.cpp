// Niuke_快到碗里来

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  long double l, r; // long double not long long!
  while (cin >> l >> r)
  {
    double C = 2 * 3.14 * r;
    if (C < l)
      cout << "No" << endl;
    else
      cout << "Yes" << endl;
  }
  return 0;
}