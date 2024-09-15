#include<stdio.h>
#include<stdlib.h>//rand()
int main()
{
  int num = rand() % 99 + 1; // rand()return 0-RAND_MAX;
  int val;
  while(1)
  {
    printf("please input a val: ");
    scanf("%d", &val);
    if(val>num)
    {
      printf("too big\n");
    }
    else if(val<num)
    {
      printf("too small\n");
    }
    else{
      printf("congratulations\n");
      break;
    }
  }
  return 0;
}