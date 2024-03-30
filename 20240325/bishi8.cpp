// 走迷宫 牛客
// 不太理解board[x][y]=  '.';为啥要改回去
#include <climits>
#include <cstdio>
#include <iostream>
#include <vector>
std::vector<std::string> board(10); // 应该放在前面，而不是中间

void check(int x, int y, int cur, int &ans)
{
  if (x > 9 || y > 9 || x < 0 || y < 0 || board[x][y] != '.') // 不是board[x][y]=='#'因为还有我们赋值的1
    return;
  if (cur > ans)
    return;
  if (x == 9 && y == 8)
  {
    if (cur < ans)
    {
      ans = cur;
    }
    return; // 只有满足条件才赋值，但是无论如何都return;如果你把if后两行写在了一个大括号中，那就成了不满足条件绝不return;
  }
  board[x][y] = 1;
  check(x + 1, y, cur + 1, ans);
  check(x - 1, y, cur + 1, ans);
  check(x, y + 1, cur + 1, ans);
  check(x, y - 1, cur + 1, ans);
  board[x][y] = '.'; // 别忘了改回去
}

int main()
{
  int ans = INT_MAX;

  // 入口在第一行第二列；出口在最后一行第九列。
  while (getline(std::cin, board[0]))
  {
    for (int i = 1; i < 10; i++)
    {
      getline(std::cin, board[i]);
    }
    check(0, 1, 0, ans);
    std::cout << ans << std::endl;
    ans = INT_MAX;
  }
}
//参考了以下代码，并且它的运行时间更少
#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;

vector<string> maze(10, string());

// ans存放最短路径，cur存放当前路径
void FindLeastSteps(int x, int y, int &ans, int cur)
{
  if (x > 9 || y > 9 || x < 0 || y < 0 || maze[x][y] != '.')
    return;
  // 这个地方的剪枝很关键!!! 在路径很多的时候，可以有效的防止多余的计算
  if (cur > ans)
    return;
  // 存储最短路径
  if (x == 9 && y == 8)
  {
    if (ans > cur)
      ans = cur;
    return;
  }

  // 我们将x,y走过的路径的位置变为1，
  // 这样就不用再开辟一个额外的used数组去记录已经走的路了
  maze[x][y] = 1;

  FindLeastSteps(x, y + 1, ans, cur + 1);
  FindLeastSteps(x + 1, y, ans, cur + 1);
  FindLeastSteps(x, y - 1, ans, cur + 1);
  FindLeastSteps(x - 1, y, ans, cur + 1);

  // 回到上层递归时，要把当前所在位置重新设为'.' 代表没走这个位置
  maze[x][y] = '.';
}

int main()
{
  string s;
  int i = 0;
  while (getline(cin, s))
  {
    maze[i++] = s;
    if (i == 10)
    {
      int ans = INT_MAX;
      FindLeastSteps(0, 1, ans, 0);
      cout << ans << endl;
      i = 0;
    }
  }
  return 0;
}