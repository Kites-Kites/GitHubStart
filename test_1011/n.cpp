#include <iostream>
using namespace std;
// 递归函数模拟加法操作
template <typename T>
T customAdd(T a, T b)
{
  if (a == 0)
  {
    return b;
  }
  else if (b == 0)
  {
    return a;
  }
  else
  {
    customAdd(a ^ b, (a & b) << 1);
  }
}

int main()
{
  int result = customAdd(90, 78);
  cout << result << endl;
}

// or
class Solution
{
public:
  int add(int A, int B)
  {
    if (A == 0)
      return B;
    else if (B == 0)
      return A;
    else
      return add(A ^ B, (A & B) << 1);
  }
};

// g++编译运行有warning!