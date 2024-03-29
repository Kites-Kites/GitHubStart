#include <iostream>
#include <string>
using namespace std;
bool fun(string &list, string &name)
{
  char flag = ',';
  for (int i = 0; i < list.size(); i++)
  {
    if (list[i] == '"')
    {
      ++i;
      flag = '"';
    }
    string people;
    while (list[i] != flag)
    {
      people += list[i++];
    }
    if (people == name)
    {
      return true;
    }
    else
    {
      //++i;//为什么加上这个就过不了了？牛客_抄送列表
      flag = ',';
    }
  }
  return false;
}
int main()
{
  string list, name;
  while (getline(cin, list))
  {
    list += ',';
    getline(cin, name); // cin>>name?
    if (fun(list, name))
    {
      cout << "Ignore" << endl;
    }
    else
    {
      cout << "Important!" << endl;
    }
  }
  return 0;
}