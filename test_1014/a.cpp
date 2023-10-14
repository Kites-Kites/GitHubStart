// 每个类都只有一个拷贝构造函数（error！）
#include <iostream>
using namespace std;

class myClass
{
private:
  int value;

public:
  myClass(const myClass *ptr) // myCLas obj1(& obj0);
  {
    value = ptr->value;
  }
  myClass(const myClass &other) // myclass obj1(obj2);
  {
    value = other.value;
  }
};