#include <ranges>
#include <iostream>
#include <vector>
int main()
{
  std::vector v1{1, 2, 3, 4, 5};
  std::vector v2{'a', 'b', 'c', 'd', 'e'};
  for (auto [a, b, c, d, e] : std::views::zip(v1, v2, v1, v1, v1))
  {
    std::cout << a << b << c << d << e << std::endl;
  }
}