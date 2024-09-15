/*喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。*/
#include<stdio.h>
int fun(int n)
{
  if(n==1)
    return 0;
  if(n==2)
    return 1;
  // return 1 + fun(n - 2);
  return fun(n / 2+ n % 2)+n/2;//n/2是可以换来的汽水，n%2是换的时候因为不能整除而留下的空瓶子，可以和这次喝完的汽水一起换空瓶，所以fun()里面要＋n%2
}
int main()
{
  int n;
  scanf("%d", &n);
  int ans = fun(30)+n;
  printf("%d", ans);
}
// 注：这道题其实是有公式的:money * 2 - 1 = total;
//还可以用循环：
#include <stdio.h>
int main()
{
  int money = 20;
  int total = money;//total就是你总共得到过的水，刚开始已经有20瓶了
  int empty = money;//empty是空瓶子个数，初值就是刚喝完的水瓶子
  while (empty >= 2)//只要大于等于2，就还可以换
  {
    total += empty / 2;
    empty = empty / 2 + empty % 2;
  }
  printf("%d\n", total);
  return 0;
}