#include <iostream>
using namespace std;
/// 静态函数（static）是编译时确定，虚函数是运行时确定：

class Test
{
public:
  int a, b;
  Test(int temp1 = 0, int temp2 = 0)
  {
    a = temp1;
    b = temp2;
  }
  int getA() { return a; }
  int getB() { return b; }
};

int main()
{
  Test obj(5, 10);
  int *p = (int *)&obj;
  *(p + 0) = 100;
  *(p + 1) = 200;
  cout << obj.getA() << " " << obj.getB() << endl;
  return 0;
}