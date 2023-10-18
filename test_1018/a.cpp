#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int *p = (int *)malloc(sizeof(int) * 10);
  p[10] = 40;
  free(p); // 记得free();
  return 0;
}