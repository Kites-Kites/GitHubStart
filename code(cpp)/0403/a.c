/*编写一个函数实现n的k次方，使用递归实现*/

#include<stdio.h>
int fun(int n,int k)
{
  if(k==0)
    return 1;
  else
    return n * fun(n, k - 1);
}
int main()
{
  int n,k;
  scanf("%d %d", &n,&k);
  int ans = fun(n,k);
  printf("%d\n", ans);
  return 0;
}