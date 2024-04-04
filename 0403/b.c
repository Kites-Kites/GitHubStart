/*写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

输入：1729，输出：19*/
#include<stdio.h>
int DigitSum(int n)
{
  if(n==0)
    return 0;
  else 
  {
    return (n % 10) + DigitSum(n / 10); // not DigitSum(n%10)+DigitSum(n/10);
  }
}
int main()
{
  unsigned int n;
  scanf("%d", &n);
  printf("%d\n", DigitSum(n));
  return 0;
}