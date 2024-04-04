/*递归和非递归分别实现求第n个斐波那契数*/
#include<stdio.h>
int fibonacci(int n)//递归
{
  if(n==1||n==2)
    return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}
int fibonacci_(int n)//非递归
{
  if(n==1||n==2)
    return 1;
  int a = 1, b = 1, c;
  for (int i = 2; i < n;i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}
int main()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", fibonacci_(n));
  return 0;
}