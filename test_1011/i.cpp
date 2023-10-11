#include <iostream>
#include <memory>
using namespace std;
class A
{
public:
  A() { cout << 1; }
  ~A() { cout << 2; }
};
// if delete p;cout<<111112   //memory leak!!!
// if delete []p;cout<<1111122222
int main()
{
  A *p = new A[5];
  delete[] p; // no delete p;
}
// use shared_ptr
int main()
{
  shared_ptr<A> pArray(new A[5]); // 使用 std::shared_ptr 创建对象数组  // 所有对象在作用域结束时(main函数结束时)会被销毁
}