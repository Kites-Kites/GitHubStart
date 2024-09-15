#include<iostream>
#include<vector>



int main()
{
  std::vector<int> intVector = {1, 2, 3, 4, 5};
  std::vector<long> longVector = {1L, 2L, 3L, 4L, 5L};
  std::cout << "intVector is ";
  for(int i:intVector)
    std::cout << i << " ";
  std::cout<<std::endl;
  std::cout << "longVector is ";
  for(long i:longVector)
    std::cout << i << " ";
  return 0;
}