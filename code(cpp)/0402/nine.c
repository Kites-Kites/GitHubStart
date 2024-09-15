//任意长度乘法口诀表
#include<stdio.h>
void Print(int n)
{
  for (int i = 1; i <= n;i++)
  {
    for (int j = 1; j <= i;j++)
    {
      printf("%d * %d =%3d ", j, i, j * i);
    }
    printf("\n");
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  Print(n);
  return 0;
}