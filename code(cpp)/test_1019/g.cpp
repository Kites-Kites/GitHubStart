#include <iostream>
#include <limits>
using namespace std;
int foo(string s, char ch) {}
int main()
{
  string s;

  while (getline(cin, s)) // getline会吃掉这一行结尾的回车;
  {
    char ch;
    cin >> ch;                                                     // 但是cin不会，所以需要cin.ignore();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); /*cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 是用于清除输入缓冲中换行符的代码片段。

让我解释一下这行代码的作用：

cin.ignore 是 cin 输入流对象的成员函数，用于忽略一定数量的字符。它的第一个参数指定要忽略的字符数，第二个参数指定停止忽略的字符。在这里，我们使用 '\n' 作为停止字符，表示要忽略换行符。

std::numeric_limits<std::streamsize>::max() 是一个用于获取 streamsize 类型的最大值的表达式。streamsize 是一个整数类型，通常用于表示输入/输出流中的字符数。使用 max() 函数，你可以获得该类型的最大可能值，以确保忽略尽可能多的字符。

所以，cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 这行代码的作用是忽略输入缓冲中的所有字符，直到遇到换行符为止，以清除换行符，确保后续的输入操作不受之前的换行符影响。*/

    // cin.ignore();//可以用这个;
    if (isupper(ch))
      ch = tolower(ch);
    int result = foo(s, ch);
    cout << result << endl;
  }
  return 0;
}
