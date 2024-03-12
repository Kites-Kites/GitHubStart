#include <stdio.h>
#include <math.h>
// 分解因数 牛客
int main()
{
  int i, n;
  while (scanf("%d", &n) != -1)
  {
    printf("%d = ", n);
    for (i = 2; i <= sqrt(n); i++)
      while (n != i)
      {
        if (n % i == 0)
        {
          printf("%d * ", i);
          n /= i;
        }
        else
          break;
      }
    printf("%d\n", n);
  }
  return 0;
}
