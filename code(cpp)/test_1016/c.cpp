#include <iostream>
using namespace std;

void foo()
{
  const char ch = 'w';
  const char *p = &ch;
  //*p是不可修改的，
  char ch2 = 'q';
  ch2 = 'a';
  // 去掉const就可以修改了
  char *p2 = "hello";                                   // read_only;一般防止你修改，添加const
  char stackArray[] = "hello";                          // 包含'\0'
  char stackArray2[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // 显式添加'\0';
}