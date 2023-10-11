#include <iostream>
using namespace std;

int main(void)
{
  const int a = 10;
  int *p = (int *)(&a);
  *p = 20; // 即使没有报错，但是编译器都会阻止a的修改
  cout << a << " " << *p << endl;
  return 0;
}