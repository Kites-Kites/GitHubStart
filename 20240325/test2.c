#include <stdio.h>
void foo(int b[][3])//b的类型其实是int(*)[3],就是一个容量为3的数组，每一个元素都是一个有3个int的数组，对他++其实跳到了4这个位置，再索引[1][1]其实就是对于8进行操作了
{
  ++b;
  b[1][1] = 9;
}
int main()
{
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  foo(a);
  printf("%d", a[2][1]);
}