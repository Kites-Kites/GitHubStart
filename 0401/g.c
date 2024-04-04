//判断闰年
#include <stdio.h>

int main()
{
  int year;
  while (scanf("%d", &year) != EOF)
  {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
      printf("yes");
    else
      printf("no");
  }
}

//公式：四年一闰&&一百年不闰或者四百年一闰