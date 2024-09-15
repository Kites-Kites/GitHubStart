// 能否构成三角形
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
  double a, b, c; // 注意题目条件，不要用int
  while (std::cin >> a >> b >> c)
  {
    // std::vector<double> vec;
    // vec.push_back(a);
    // vec.push_back(b);
    // vec.push_back(c);
    std::vector<double> vec = {a, b, c};
    std::sort(vec.begin(), vec.end());
    if (vec[0] + vec[1] > vec[2])
    {
      if (vec[2] - vec[1] < vec[0])
      {
        std::cout << "Yes" << std::endl;
      }
    }
    else
      std::cout << "No" << std::endl;
  }
  return 0;
}

// 可以改成if(vec[0]+vec[1]>vec[2]&&vec[1]+vec[2]>vec[0]&&vec[0]+vec[2]>vec[1])
// {
// std::cout << "Yes" << std::endl;
// }