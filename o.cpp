/*请编写一个函数（允许增加子函数），计算n x m的棋盘格子（n为横向的格子数，m为竖向的格子数）沿着各自边缘线从左上角走到右下角，总共有多少种走法，要求不能走回头路，即：只能往右和往下走，不能往左和往上走*/
#include <iostream>
using namespace std;
int foo(int a, int b)
{
  if (a == 1 || b == 1) // 递归结束条件
  {
    return a + b;
  }
  else
  {
    return foo(a - 1, b) + foo(a, b - 1);
  }
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << foo(a, b) << endl;
  return 0;
}