#include <iostream>
using namespace std;
// 牛客_杨辉三角变形
// 除了第一和第二行，没有偶数输出-1；
// 其他行都是2324...2324循环
// 所以根据行号来判断结果;
int main()
{
  int n;
  while (cin >> n)
  {
    if (n == 1 || n == 2)
    {
      cout << -1 << endl;
    }
    else if (n % 2 == 1) // 还要注意else;因为我们无法避免有同时满足这些的数存在，导致测试用例不通过;
    {
      cout << 2 << endl;
    }
    else if (n % 4 == 0)
    {
      cout << 3 << endl;
    }
    else if (n % 4 == 2)
    {
      cout << 4 << endl;
    }
  }
  return 0;
}

/// 错误的while循环写法（因为2%2==0但是它得输出-1;）

// while (cin >> n)
// {
//   if (n == 1 || n == 2)
//   {
//     cout << -1 << endl;
//   }
//   if (n % 2 == 1)
//   {
//     cout << 2 << endl;
//   }
//   if (n % 2 == 0)
//   {
//     cout << 3 << endl;
//   }
//   if (n % 2 == 3)
//   {
//     cout << 4 << endl;
//   }
// }