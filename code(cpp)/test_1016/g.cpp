// niuke_跳石板问题_只能跳当前石板位置数的因数（且该因数不等于1和它本身），直到跳到end为止，把跳了多少次计算出来;

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int bfs(int start, int end)
{
  queue<pair<int, int>> q;
  vector<bool> visited(end + 1, false);
  q.push({start, 0});
  visited[start] = true;
  while (!q.empty())
  {
    int currentPos = q.front().first;
    int steps = q.front().second;
    q.pop();
    if (currentPos == end)
    {
      return steps;
    }
    for (int i = 2; i * i <= currentPos; i++)
    {
      if (currentPos % i == 0)
      {
        int nextPos1 = currentPos + i;
        int nextPos2 = currentPos + currentPos / i;
        if (nextPos1 <= end && !visited[nextPos1])
        {
          q.push({nextPos1, steps + 1});
          visited[nextPos1] = true;
        }
        if (nextPos2 <= end && !visited[nextPos2])
        {
          q.push({nextPos2, steps + 1});
          visited[nextPos2] = true;
        }
      }
    }
  }
  return -1;
}
int main()
{
  int start, end;
  cin >> start >> end;
  int ans = bfs(start, end);
  cout << ans << endl;
}