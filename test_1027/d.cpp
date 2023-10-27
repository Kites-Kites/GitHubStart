#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;
using PII = pair<int, int>;
#define x first
#define y second
// Niuke_迷宫问题
const int N = 15;
int g[N][N];
bool st[N][N];
vector<PII> path;

int n, m;
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
void dfs(int x, int y)
{
  if (x == n - 1 && y == m - 1)
  {
    for (int i = 0; i < path.size(); i++)
      cout << "(" << path[i].x << "," << path[i].y << ")" << endl;
    cout << "(" << n - 1 << "," << m - 1 << ")" << endl;
    return;
  }
  path.push_back({x, y});
  st[x][y] = true;

  for (int i = 0; i < 4; i++)
  {
    int a = x + dx[i], b = y + dy[i];
    if (a >= 0 && a < n && b >= 0 && b < m && g[a][b] == 0 && !st[a][b])
    {
      dfs(a, b);
    }
  }

  st[x][y] = false;
  path.pop_back();
}

int main()
{
  while (cin >> n >> m)
  {
    memset(g, 0, sizeof g);
    memset(st, 0, sizeof st);
    path.clear();
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
      {
        cin >> g[i][j];
      }

    dfs(0, 0);
  }
  return 0;
}