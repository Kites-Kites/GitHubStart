#include <iostream>

class Solution
{
private:
  int val;
  Solution *next;

public:
  Solution(int val, Solution *next)
      : val(val), next(next) {}
  Solution(int val)
      : val(val), next(nullptr) {}
  void getSolution() const { std::cout << val << std::endl; }
};
int main()
{
  Solution s1(7);
  Solution *p = &s1;
  Solution s2(32, p);
  s2.getSolution();
  std::cout << sizeof(s1) << std::endl; // sizof(int)=4 and 64 bit system(8bytes)=12bytes+内存对齐,so it is 16 bytes.
  return 0;
}