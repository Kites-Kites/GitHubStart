// Niuke_跳台阶问题_这个不是1+return（n-1)!
#include <cmath>
class Solution
{
public:
  int jumpFloorII(int number)
  {
    return pow(2, (number - 1));
  }
};