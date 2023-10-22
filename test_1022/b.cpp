#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 查找两个字符串a,b中的最长公共子串_NiuKe
string longestCommonSubstring(string &s1, string &s2)
{
  if (s1.empty() || s2.empty())
    return 0;
  unsigned int m = s1.length();
  unsigned int n = s2.length();
  string res;
  vector<vector<int>> tag(m + 1, vector<int>(n + 1, 0));
  for (unsigned int i = 1; i < m + 1; i++)
  {
    for (unsigned int j = 1; j < n + 1; j++)
    {
      if (s1[i - 1] == s2[j - 1])
      {
        tag[i][j] = tag[i - 1][j - 1] + 1;
        res = tag[i][j] > res.length() ? s1.substr(i - tag[i][j], tag[i][j]) : res;
      }
    }
  }
  return res;
}

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  if (s1.length() > s2.length())
    swap(s1, s2);
  string ans = longestCommonSubstring(s1, s2);
  cout << ans << endl;
  return 0;
}