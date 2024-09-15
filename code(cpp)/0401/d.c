#include <stdio.h>
//死循环！
//我以为是0-9
//但是其实每次i都被赋值为5，上去一加后下来立马赋值为5
int main()
{
  int i = 0;
  for (i = 0; i < 10; i++)
  {
    if (i = 5)
      printf("%d ", i);
  }
  return 0;
}