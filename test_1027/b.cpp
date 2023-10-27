#include <iostream>
#include <string>
using namespace std;
// 计算字符串的编辑距离_Niuke_Acwing
//  error!

//  int main()
//  {
//    string s1, s2;
//    while (cin >> s1 >> s2)
//    {
//      int len1 = s1.length();
//      int len2 = s2.length();
//      int arr[len1 + 1][len2 + 1];
//      for (int i = 0; i <= len1; i++)
//        arr[0][i] = i;
//      for (int j = 0; j <= len2; j++)
//        arr[j][0] = j;
//      for (int i = 1; i <= len1; i++)
//      {
//        for (int j = 1; j <= len2; j++)
//        {
//          arr[i][j] = min(arr[i - 1][j] + 1, arr[i][j - 1] + 1);
//          if (s1[i] == s2[j])
//          {
//            arr[i][j] = min(arr[i][j], arr[i - 1][j - 1]);
//          }
//          else
//          {
//            arr[i][j] = min(arr[i][j], arr[i - 1][j - 1] + 1);
//          }
//        }
//      }
//      cout << arr[len1][len2] << endl;
//    }
//  }

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int leastEdit(string a, string b)
{
  int m = a.size(), n = b.size();
  vector<vector<int>> dp(m + 1, vector<int>(n + 1));

  for (int i = 0; i <= m; i++)
    dp[i][0] = i;
  for (int i = 0; i <= n; i++)
    dp[0][i] = i;

  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + 1;                      // 添加 和 删除
      dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + (a[i - 1] != b[j - 1])); // 替换和 啥也不做
    }
  }
  return dp[m][n];
}

int main()
{

  string s1, s2;

  cin >> s1 >> s2;

  cout << leastEdit(s1, s2) << endl;

  return 0;
}
