#include <stdio.h>

int main()
{
  float val;
  while(scanf("%f", &val)!=EOF)
  printf("%.1f\n", 1/val);
}