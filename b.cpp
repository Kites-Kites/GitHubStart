#include <iostream>
using namespace std;
class Widget
{
public:
  Widget() {}
  Widget(const Widget &other) { cout << "ha\n"; }
};

Widget f(Widget u) // 实参赋值给形参会发生拷贝构造
{
  Widget v(u);  // 这里的拷贝构造被忽略了
  Widget w = v; // 和上面的是一码事
  return w;     // 这里发生返回值优化
}

Widget ff(Widget u)
{

  return u;
}
int main()
{
  Widget x;
  Widget y = f(f(x));
  cout << endl;
  Widget i;
  Widget z = f(f(i));
}