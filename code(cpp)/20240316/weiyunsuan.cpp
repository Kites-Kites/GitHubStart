#include<iostream>
// 只能表示展示4位，也就是最大是15;
int main()
{
  int n;
  label:
  std::cin >> n;
  for (int i = 3; i >= 0; i--) // not i=n;
  {
    std::cout << (n >> i & 1); // 右移几位就是把第几位放到末尾，再让他和1按位与，就能拿出第几位;
  }
  std::cout << std::endl;
  goto label;
  return 0;
}