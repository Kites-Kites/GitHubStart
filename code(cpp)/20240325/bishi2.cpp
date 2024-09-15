//蘑菇阵 牛客
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
// 到最后一行，向右走的概率为1。同理在最后一列时候，向下走概率也为1。
// 其它的都是用 fn[i][j] = 0.5*fn[i][j-1] + 0.5*fn[i-1][j];

int main()
{
  int n, m, k;
  while (cin >> n >> m >> k)
  {

    vector<vector<int>> mp(n + 1, vector<int>(m + 1, 0));
    vector<vector<float>> fn(n + 1, vector<float>(m + 1, 0));
    for (int i = 0; i < k; i++)
    {
      int x, y;
      cin >> x >> y;
      mp[x][y] = 1;
    }

    fn[1][1] = 1.0;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m; j++)
      {
        if (i == 1 && j == 1)
          continue;
        if (mp[i][j] == 1)
          fn[i][j] = 0.0;
        else
          fn[i][j] = (i == n ? 1 : 0.5) * fn[i][j - 1] + (j == m ? 1 : 0.5) * fn[i - 1][j];
      }
    }
    float ans = fn[n][m];
    cout.setf(ios::fixed);
    cout << setprecision(2) << ans << endl;
  }

  return 0;
}