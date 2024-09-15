#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
// 找出字符串中第一个出现一次的，若没有输出-1;
char getFirstCharactor(string s)
{
  unordered_map<char, int> count;
  for (auto e : s)
  {
    count[e]++;
  }
  char ch;
  for (auto e : s)
  {
    if (count[e] == 1)
    {
      ch = e;
      return ch;
    }
  }
  return '#';
}

int main()
{
  string s;
  cin >> s;
  char ch = getFirstCharactor(s);
  if (ch == '#')
  {
    cout << -1;
  }
  else
  {
    cout << ch << endl;
  }
  return 0;
}
