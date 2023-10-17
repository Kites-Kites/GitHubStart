#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*假设有一非零序列 a1<a2<a3<a4<...<an，至少选出多少个能够保证覆盖所有n种颜色？
//答案是 sum(a1...an)-a1+1，用数学归纳法可以证明*/
int findMinimum(int n, vector<int> left, vector<int> right)
{
  int ans = 0, sum1 = 0, sum2 = 0;
  int L_min = INT_MAX, R_min = INT_MAX;
  for (int i = 0; i < left.size(); i++)
  {
    if (left[i] == 0 || right[i] == 0)
    {
      ans += (left[i] + right[i]);
    }
    else
    {
      sum1 += left[i];
      sum2 += right[i];
      L_min = min(L_min, left[i]);
      R_min = min(R_min, right[i]);
    }
  }

  return ans // 考虑0的情况
         +
         1 // 左手或右手一侧，最少拿多少双，然后另一侧拿一只手套即可;
         + min(sum1 - (L_min) + 1, sum2 - (R_min) + 1);
}

int main()
{
  vector<int> left = {0, 7, 1, 6};
  vector<int> right = {1, 5, 0, 6};
  int ans = findMinimum(4, left, right);
  cout << ans;
}

// 与上面无关：
/*
把多于mn(m乘n)+1（n不为0）个的物体放到n个抽屉里，则至少有一个抽屉里有不少于（m+1）的物体。

第二抽屉原理：
把（mn－1）个物体放入n个抽屉中，其中必有一个抽屉中至多有（m—1）个物体(例如，将3×5-1=14个物体放入5个抽屉中，则必定有一个抽屉中的物体数少于等于3-1=2)。*/