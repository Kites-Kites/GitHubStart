/*递归和非递归分别实现求n的阶乘（不考虑溢出的问题）*/
#include<stdio.h>
int factorial(int n)
{
  if(n==1||n==0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}
int factorial_(int n)
{
  if(n==0)
    return 1;
  int ans = 1;
  for (int i = 1; i <= n;i++)
  {
    ans *= i;
  }
  return ans;
}
int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    printf("%d\n", factorial_(n));
  }
  return 0;
}