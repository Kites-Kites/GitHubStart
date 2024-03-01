#include <iostream>
#include <typeinfo>
template <typename T, typename U>
auto ADD(const T &left, const U &right)
{
  return left + right;
}
int main()
{
  int a = 90;
  float b = 3.14;
  double c = 9.718f;
  std::cout << ADD(a, b) << std::endl;
  std::cout << ADD(b, c) << std::endl;
  return 0;
}