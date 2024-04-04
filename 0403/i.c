#include<stdio.h>
int main()
{
  char acX[] = "abcdefg";
  char acY[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
  printf("%d", sizeof(acX));//8
  printf("%d", sizeof(acY));//7
}