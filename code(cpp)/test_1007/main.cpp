#include <iostream>
#include <memory> //std::shared_ptr std::unique_ptr
class Base
{
public:
  virtual void foo() { std::cout << "Base\n"; }
};

class Derive : public Base
{
public:
  virtual void foo() override { std::cout << "Derived\n"; }
};
int main()
{
  std::shared_ptr<Base> p = std::dynamic_pointer_cast<Base>(std::make_shared<Derive>()); // 通过 std::make_shared<Derive>() 创建了一个派生类对象 Derive
  p->Base::foo();                                                                        // 本来调用被重写的派生类的foo();但是Base::指定要调用基类的版本
  std::dynamic_pointer_cast<Base>(p)->Base::foo();
  // std::dynamic_pointer_cast 尝试将指针 p 转换为指向基类 Base 的智能指针
  std::dynamic_pointer_cast<Derive>(p)
      ->Base::foo();
  std::static_pointer_cast<Base>(p)->Base::foo(); // std::static_pointer_cast 将指针 p 转换为指向基类 Base 的智能指针
}