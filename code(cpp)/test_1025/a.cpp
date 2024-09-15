#include <iostream>
using namespace std;
// Niuke_MP3光标位置
// 主要是要考虑特判情况，假设s[i]拿到的是U，那么分为两种情况，第一是要从第一页跳到最后一页的那种，第二是翻小页，合理运用max,min就行;
// 假设s[i]拿到的是D,那么也分为两种情况：第一是从最后一个跳到第一页，第二是翻小页;
int main()
{
  int n;
  while (cin >> n)
  {
    string s;
    cin >> s;
    int index = 1, page = 1;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == 'U')
      {
        index--;
        if (index == 0)
        {
          index = n;
          page = max(n - 3, 1);
        }
        else if (index < page)
        {
          page = index;
        }
      }
      else
      {
        ++index;
        if (index == n + 1)
        {
          index = 1;
          page = 1;
        }
        if (index == page + 4)
        {
          page = index - 3;
        }
      }
    }
    for (int i = page; i <= min(page + 3, n); i++)
    {
      cout << i << " ";
    }
    cout << endl
         << index << endl;
  }
  return 0;
}