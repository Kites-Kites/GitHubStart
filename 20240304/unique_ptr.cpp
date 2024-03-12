// 异常有些问题是解决不了的，需要加很多东西，而且有可能你也发现不了防止内存泄漏...
// So 智能指针
#include <iostream>
template <class T>
class SmartClass
{
private:
  T *_ptr;

public:
  SmartClass(T *ptr)
      : _ptr(ptr) {}
  ~SmartClass()
  {
    std::cout << "release it" << std::endl;
    delete _ptr;
  }
  T &operator*() const // use & can make 返回值可以被修改
  {
    return *_ptr;
  }
  T *operator->() //
  {
    return _ptr;
  }
};

double ddiv(int a, int b)
{
  if (b == 0)
  {
    throw "error";
  }
  else
  {
    return (double)a / (double)b;
  }
}
void Func()
{
  SmartClass<int> s1(new int(1));
  std::cout << *s1 << std::endl;
  SmartClass<int> s2(new int(2));
  std::cout << *s2 << std::endl;
  std::cout << ddiv(15, 9) << std::endl; // not div,because it return div_t
  std::cout << ddiv(45, 0) << std::endl;
}

int main()
{
  try
  {
    Func();
  }
  // catch (std::exception &e)
  // {
  //   std::cout << e.what() << std::endl;
  // }//在这段代码中，虽然 ddiv(45, 0) 抛出了异常，但是异常类型是 const char* 而不是 std::exception，因此 catch 块无法捕获它。所以在 Func() 函数中，异常并没有被捕获，而是直接导致了程序的异常终止，从而跳过了析构函数的调用。
  catch (const char *str)
  {
    std::cout << str << std::endl;
  }

  SmartClass<int> hanxian(new int(90));
  std::cout << *hanxian << std::endl; // use opearator->()
  SmartClass<int> hanhaoxuan(hanxian);
  std::cout << *hanhaoxuan << " " << *hanxian << std::endl;
  return 0;
}

// 智能指针是RAII思想的产物，不是RAII的全部
// c++98 auto_ptr
// 悬空指针（空指针）：指向了已经释放的空间，即指针存的是那个地址（auto_ptr就存在这个问题）