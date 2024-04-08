/*
求出0～100000之间的所有“水仙花数”并输出。

“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。*/
//这个题和普通的那水仙花数（规定是三位数了）不一样，我们把一位数，两位数也算进去了，另外0的一次方是0
#include<stdio.h>
#include<math.h>
int digitsNumber(int i)
{
  int ans = 0;
  while(i!=0)
  {
    ans++;
    i /= 10;
  }
  return ans;
}
int fun(int i,int count)
{
  int ans = 0;
  while(i!=0)
  {
    ans += pow(i % 10, 3);
    i /= 10;
  }
  return ans;
}
int main()
{
  int count;
  for (int i = 0; i <= 100000;i++)
  {
    count = digitsNumber(i);
    if(fun(i,count)==i)
      printf("%d ", i);
  }
  printf("\n");
  return 0;
}