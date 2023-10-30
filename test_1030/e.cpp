#include <stdio.h>
int main()
{
  int s = 9;
  printf("%4d", s); // 空格空格空格9
  printf("\n");
  printf("%04d", s); // 0009
}