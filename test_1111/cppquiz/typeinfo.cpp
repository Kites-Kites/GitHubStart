#include<iostream>
#include<typeinfo>//use typeid(variable).name() to print variable name
struct S
{
  int x;
};

int main()
{
  auto s = S{};
  std::cout<<typeid(s).name()<<'\n';//return 1S,(have one length and S is its typename)

  int a = 32;
  std::cout<<typeid(a).name()<<'\n';//return i
  double b = 3.14;
  std::cout<<typeid(b).name()<<'\n';//return d
  std::cout<<s.x;
}
