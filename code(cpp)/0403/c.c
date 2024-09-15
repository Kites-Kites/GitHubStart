/*递归和非递归分别实现strlen*/
#include<stdio.h>
int mystrlen(char*p)
{
  while(*p++!='\0')
  {
    return 1 + mystrlen(p);
  }
  return 0;
}
int mystrlen2(char* p)
{
  int len = 0;
  while (*p!='\0')
  {
    ++len;
    ++p;
  }
  return len;
}
int main()
{
  char str[] = "hello Linux->world!";
  printf("%d\n", mystrlen2(str));
  return 0;
}