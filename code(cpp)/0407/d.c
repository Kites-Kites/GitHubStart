#include <stdio.h>
int main()
{
  int a = 0, b = 1;
  int *p1 = &a, *p2 = &b;
  if(p1>p2)
  {
    printf("p");
  }
  else{
    printf("o");
  }
  return 0;
}

//指针可以比大小？z