#include<stdio.h>
int check_error(int val)
{
  if(val<9)
    return 0;
  if(val%10==9)
  {
    printf("%d-", val);
    return 1;
  }
  return check_error(val / 10);
}
int check_correct(int val)
{
  int count = 0;
  while(val!=0)
  {
    if(val%10==9)
    {
      count++;
    }
    val /= 10;
  }
  return count;
}




int main()
{
  int ans = 0;
  for (int i = 1; i <= 100;i++)
  {
    ans += check_correct(i);
  }
  printf("%d\n", ans);
}