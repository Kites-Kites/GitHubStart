#include <iostream>
using namespace std;

class myClass
{
public:
  // 赋值拷贝构造
  myClass(const myClass &other)
  {
    this->data = other.data;
  }
  // 重载赋值运算符
  myClass &operator=(const myClass &other)
  {
    if (this == &other)
    {
      return *this;
    }
    this->data = other.data;
    return *this;
  }

private:
  int data;
};

//[注]：赋值运算符通常要访问私有成员变量，而只有类的成员函数才能访问私有成员，所以重载赋值运算符只能作为类的成员函数重载！