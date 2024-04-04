// 打印100~200之间的素数
#include<stdio.h>
#include<math.h>
int main()
{
  for (int i = 100;i<=200;i++)
  {
    int count = 0;//不敢定义在最开始！不然每次换一个数，count还是刚那个值
    for (int j = 2; j < sqrt(i); j++) // 这里是从2开始的;
    {
      if(i%j==0)
      {
        count++;
        break;
      }
    }
    if(!count)
    printf("%d ", i);
  }
  printf("\n");
  return 0;
}