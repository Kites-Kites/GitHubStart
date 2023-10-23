#include <string>
#include <iostream>
using namespace std;
// Niuke_字符串反转
// By me
// 不更改原串
string reverseString(string &str)
{
  string temp = str;
  int i = 0, j = str.size() - 1;
  for (auto e : str)
  {
    temp[j--] = e;
  }
  return temp;
}

int main()
{
  string str;
  cin >> str;
  string res = reverseString(str);
  cout << res << endl;
  return 0;
}
// By ChatGPT
// 直接更改原串
string reverseString(string &str)
{
  int i = 0, j = str.size() - 1;
  while (i < j)
  {
    swap(str[i], str[j]);
    i++;
    j--;
  }
  return str;
}