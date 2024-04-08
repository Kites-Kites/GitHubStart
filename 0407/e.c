/*求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

例如：2+22+222+2222+22222

*/

// error code;

// int main()
// {
//   int a;
//   scanf("%d", &a);
//   int sum = a;
//   for (int i = 0; i < 4;i++)
//   {
//     sum = sum + (sum * 10 + a);
//   }
//   printf("%d\n", sum);
// }
#include<stdio.h>
int main()
{
  int a = 0;
  scanf("%d", &a);
  int Sn = 0;
  int tmp = 0;
  for (int i = 0; i < 5; i++)
  {
    tmp = a + tmp * 10;
    Sn += tmp;
  }

  printf("%d", Sn);
  return 0;
}

