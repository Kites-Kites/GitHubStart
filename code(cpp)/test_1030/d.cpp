#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Niuke_星际密码
// 根据题目可以手算推断一下规律，发现矩阵左上角是有规律的且是斐波那契数列，于是我们就根据数据规模创建一个数组，并且根据题意%1000，然后根据读到的数据来确定如何输出;
int main()
{
  int arr[10001] = {0, 1, 2};
  for (int i = 3; i < 10001; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
    arr[i] = arr[i] % 10000; // 题目说大于4位的只输出后四位;
  }
  int n;
  while (cin >> n)
  // while (scanf("%d", &n) != -1)
  {
    int cout;
    for (int i = 0; i < n; i++)
    {
      cin >> cout;
      printf("%04d", arr[cout]);
    }
    printf("\n");
  }
}