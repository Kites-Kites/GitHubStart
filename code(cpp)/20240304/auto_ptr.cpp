#include <memory>
#include <iostream>

void test()
{
  std::auto_ptr<int> p1(new int(80));
  std::auto_ptr<int> p2(p1); // p2接管了p1指向的内存,p1被置为nullptr;
  *p1 = 90;                  // UB
  std::cout << *p1 << *p2 << std::endl;
}

int main()
{
  test(); // auto_ptr存在悬空指针问题。如果再给他赋值这是错误的
  return 0;
}

// not auto_ptr,please use shared_ptr and unique_ptr;
