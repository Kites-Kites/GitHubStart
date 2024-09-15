#include <iostream>
#include <vector>
#include <ranges>
#include <array>
// c++20
// output:segment fault!不知原因
int main()
{
  std::array numbers{1, 2, 3, 4, 5, 6};
  int chunk_size = 3;
  for (const auto &window : std::ranges::views::chunk(numbers, 3)) // output: 1 2 3 回车 4 5 6
  // for (const auto &window : std::ranges::views::chunk(numbers, 5))//ouput:1 2 3 4 5 回车 6
  {
    for (const auto &e : window)
    {
      std::cout << e << " ";
    }
    std::cout << '\n';
  }
}