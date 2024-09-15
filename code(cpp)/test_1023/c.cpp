#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str1, str2;
  cin >> str1 >> str2;
  if (str1.length() > str2.length())
    swap(str1, str2);
  int m = str1.length();
  int n = str2.length();
  int ans = 0;
  vector<vector<int>> tag(m + 1, vector<int>(n + 1, 0));
  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (str1[i - 1] == str2[j - 1]) // 切记：not str1[i][j]==str2[i][j];
      {
        tag[i][j] += tag[i - 1][j - 1] + 1;
        ans = max(ans, tag[i][j]);
      }
    }
  }
  cout << ans << endl;
  return 0;
}