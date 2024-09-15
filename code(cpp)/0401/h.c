//low-code
//求最大公约数
#include <stdio.h>

int main()
{
  int a, b;
  while (scanf("%d %d", &a, &b) != EOF)
  {
    if (a < b)
    {
      int temp = a;
      a = b;
      b = temp;
    }
    for (int i = b; i >= 1; i--)
    {
      if (a % i == 0 && b % i == 0)
      {
        printf("%d\n", i);
        break;
      }
    }
  }
}

//nice-code
#include <stdio.h>
int get(int a, int b)
{
  return b ? get(b, a % b) : a;
}
int main()
{
  int a, b;
  while (scanf("%d %d", &a, &b) != EOF)
    printf("%d\n", get(a, b));
}