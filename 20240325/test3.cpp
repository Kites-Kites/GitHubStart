#include<iostream>

void test1()
{
  int *p = new int();//默认初始化为0
  std::cout << *p << std::endl;
  delete p;
}
void test2()
{
  int *p = new int(190);
  std::cout << *p << std::endl;
  delete p;
}
void test3()
{
  int *p = new int[2]();
  std::cout << p[0] <<" "<<p[1]<<std::endl;
  delete [] p;
}
void test4()
{
  int *p = new int[2];
  std::cout << p[0] << " " << p[1] << std::endl;
  delete[] p;
}
int main()
{
  test4();
  return 0;
}

// 另外：指针可以随意改变指向吗？const;