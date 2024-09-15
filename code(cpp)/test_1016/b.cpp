#include <iostream>
using namespace std;

class abstractClass
{
public:
  virtual void foo() = 0;
  //...
};

int main()
{
  abstractClass *p;
  abstractClass &res = *p; // res就可以访问p指向的对象，但很可惜，abstractClass不能实例化对象，因为是抽象基类（包含纯虚成员）;
}