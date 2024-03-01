#include <iostream>
#include <vector>
#include <string>
// last
// void Swap(int &a, int &b)
// {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// now
template <typename T>
void Swapp(T &left, T &right)
{
  T temp = left;
  left = right;
  right = temp;
}
int main()
{
  int a = 90, b = 100;
  double c = 3.14, d = 6.15;
  Swapp(a, b);
  Swapp(c, d);
  std::cout << a << " " << b << std::endl; // 100 90
  std::cout << c << " " << d << std::endl; // 6.15 3.14
  return 0;
}