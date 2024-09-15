/*递归方式实现打印一个整数的每一位*/
#include<stdio.h>
// error code because it prints 2 when printf("%d\n", PrintDigits(n)); why ? UB ?
int PrintDigits(int n)
{
  if(n==0)
    return 0;
  else 
  {
    PrintDigits(n / 10);
    printf("%d ", n % 10);
  }
}
//correct code.
void correct_PrintDigits(int n)
{
  if (n == 0)
    return;
  else
  {
    PrintDigits(n / 10);
    printf("%d ", n % 10);
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  correct_PrintDigits(n);
  // printf("%d\n", PrintDigits(n));
  return 0;
}