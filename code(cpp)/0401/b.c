#include <stdio.h>

int main()
{
  int val;
  scanf("%d", &val);
  int hour = val / 3600;
  int minutes = (val % 3600) / 60;
  int seconds = val % 60;
  printf("%d %d %d", hour, minutes, seconds);
  return 0;
}


//时分秒转换