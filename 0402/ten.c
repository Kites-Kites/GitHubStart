#include<stdio.h>
void swap_int(int*p,int*q)
{
  int temp = *p;
  *p = *q;
  *q = temp;
}
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("last is %d %d\n", a, b);
  swap_int(&a, &b);
  printf("now is %d %d\n", a, b);
}