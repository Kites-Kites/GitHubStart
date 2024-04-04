// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
#include<stdio.h>
int main()
{
  float ans = 0.0;
  int val = -1;
  for (int i = 1; i <= 100;i++)
  {
    ans += 1.0 / i * val; // ans+=1/i*val;
    val = -val;
  }
  // printf("%.2f", ans);//correct but bad than %lf
  // printf("%.2d\n", ans);//error type for int
  printf("%lf\n", ans); /*输入时%lf表示地址对应的是8字节的double，%f表示地址对应的是4字节的float*/
  /*输出时float and double 一般可以混着用？*/
}