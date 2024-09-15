/*
实现一个函数is_prime，判断一个数是不是素数。

利用上面实现的is_prime函数，打印100到200之间的素数。

*/
#include<stdio.h>
#include<math.h>
bool is_prime(int n)
{
  for (int i = 2; i <= sqrt(n);i++)
  {
    if(n%i==0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  for (int i = 100; i <= 200;i++)
  {
    if(is_prime(i))
      printf("%d ", i);
  }
  return 0;
}