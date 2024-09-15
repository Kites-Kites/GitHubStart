#include <omp.h> //openmp函数库
#include <iostream>
int main()
{
#pragma omp parallel for num_threads(4) // 预处理指令
  for (int i = 0; i < 10; i++)
  {
    std::cout << i << "next->" << std::endl;
  }
  return 0;
}