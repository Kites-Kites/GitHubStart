#include<iostream>

struct foo
{
  int x;
  foo(){std::cout<<"static constructor\n";}
  ~foo(){std::cout<<"static destrutor\n";}

};
foo f;
int main()
{
  std::cout<<"main function\n";
}
