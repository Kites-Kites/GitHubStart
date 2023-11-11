#include<iostream>

int main()
{
  int a = 1;
  decltype((a))b = a;//int& b = a;https://en.cppreference.com/w/cpp/language/decltype
  
  //decltype((a))is not the same as decltype(a).
  b++;
  std::cout<<a<<" "<<b;

  return 0;
}