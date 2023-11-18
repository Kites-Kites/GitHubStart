// CRTP
// 让子类自己作为父类的模板参数，这样每一个子类就继承了独一无二的父类。
#include <iostream>

template <typename Derived>
class Base
{
public:
  void Interface()
  {
    static_cast<Derived *>(this)->Implementation();
  }
  void Implementation() { std::cout << 0 << std::endl; }
};

class Derived : public Base<Derived>
{
public:
  void Implementation()
  {
    std::cout << 1 << std::endl;
  }
};

class Derived2 : public Base<Derived2>
{
public:
  void Implementation()
  {
    std::cout << 2 << std::endl;
  }
};
int main()
{
  Derived d;
  d.Interface(); // 1

  Derived2 d2;
  d2.Interface(); // 2
  return 0;
}