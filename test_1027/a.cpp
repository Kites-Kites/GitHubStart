#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
// Niuke_微信红包
// 1
class Gift
{
public:
  int getValue(vector<int> gifts, int n)
  {
    sort(gifts.begin(), gifts.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (gifts[i] == gifts[n / 2])
      {
        count++;
      }
    }
    if (count > n / 2)
    {
      return gifts[n / 2];
    }
    return 0;
  }
};

// 2
class Gift
{
public:
  int getValue(vector<int> gifts, int n)
  {
    map<int, int> g;
    for (int i = 0; i < n; i++)
    {
      if (++g[gifts[i]] > n / 2)
      {
        return gifts[i];
      }
    }
    return 0;
  }
};