#include <iostream>
// 求解方程x1+x2+x3+x4=12的正整数解有多少组？
int main()
{
  int count = 1;
  for (int i = 1; i < 12; i++)
  {
    for (int j = 1; j < 12; j++)
    {
      for (int k = 1; k < 12; k++)
      {
        for (int l = 1; l < 12; l++)
        {
          if (i + j + k + l == 12)
          {
            std::cout << count << " " << i << " " << j << " " << k << " " << l << " " << std::endl;
            count++;
          }
        }
      }
    }
  }
}
