#include <iostream>
#include <typeinfo>
template <typename T>
T ADD(const T &left, const T &right)
{
  return left + right;
}
int main()
{
  int a = 90, b = 100;
  std::cout << typeid(ADD(a, b)).name() << " " << ADD(a, b) << std::endl;
  double c = 3.14;
  ADD<double>(c, a);
  ADD(c, (double)a); // 有波浪线的原因是没有使用返回值!!!
  return 0;
}