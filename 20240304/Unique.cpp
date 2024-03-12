#include <iostream>
#include <memory>
class myclass
{
public:
  myclass()
  {
    std::cout << 1;
  }
  ~myclass()
  {
    std::cout << 2;
  }
};
int main()
{
  std::unique_ptr<myclass> p1(new myclass);
  std::unique_ptr<myclass> p2;
  // 通过移动构造函数将所有权转移给另一个unique_ptr
  //  p1被置空
  p2 = std::move(p1); // 1 2
}