/*题目：考拉有n个字符串字符串，任意两个字符串长度都是不同的。考拉最近学习到有两种字符串的排序方法： 1.
根据字符串的字典序排序。例如：
"car" < "carriage" < "cats" <
"doggies < "koala"
2.根据字符串的长度排序。例如：
"car" < "cats" < "koala" <
"doggies" < "carriage"
考拉想知道自己的这些字符串排列顺序是否满足这两种排序方法:
输入第一行为字符串个数n(n ≤ 100)
接下来的n行,每行一个字符串,字符串长度均小于100，均由小写字母组成
输出描述：
如果这些字符串是根据字典序排列而不是根据长度排列输出"lexicographically",
如果根据长度排列而不是字典序排列输出"lengths",
如果两种方式都符合输出"both"，否则输出"none"
示例1:
输入
3
a
aa
bbb
输出
both

分析：字符串string的大小比较就是按照ASCII码比的，而长度可以按照字符串方法size()比较，另外需要注意getline()将换行符\n留在缓冲区，要通过cin.get()将缓冲区的\n取走才可以进行下一次字符串的接受
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool is_dict_rank(vector<string> &vec)
{
  for (int i = 0; i < vec.size() - 1; i++)
  {
    if (vec[i] > vec[i + 1])
    {
      return false;
    }
  }
  return true;
}

bool is_length_rank(vector<string> &vec)
{
  for (int i = 0; i < vec.size() - 1; i++)
  {
    if (vec[i].size() > vec[i + 1].size())
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  vector<string> v;
  v.resize(n);
  cin.ignore(); // 清除回车和其他剩余字符
  for (int i = 0; i < n; i++)
  {
    getline(cin, v[i]);
  }

  if (is_dict_rank(v) && is_length_rank(v))
  {
    cout << "both" << endl;
  }
  else if (!is_dict_rank(v) && is_length_rank(v))
  {
    cout << "lengths" << endl;
  }
  else if (is_dict_rank(v) && !is_length_rank(v))
  {
    cout << "lexicographically" << endl;
  }
  else
  {
    cout << "none" << endl;
  }
  return 0;
}

// int main()
// {
//   int n;
//   cin >> n;
//   vector<string> v;
//   v.resize(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin.get(); // 吃回车
//     getline(cin, v[i]);
//   }
//   if (is_dict_rank(v) && is_length_rank(v))
//   {
//     cout << "both"<<endl;
//   }
//   else if (!is_dict_rank(v) && is_length_rank(v))
//   {
//     cout << "lengths"<<endl;
//   }
//   else if (is_dict_rank(v) && !is_length_rank(v))
//   {
//     cout << "lexicographically"<<endl;
//   }
//   else {cout<<"none"<<endl;}
//   return 0;
// }