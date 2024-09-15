/*一些嵌入式系统可能在32位系统上使用8字节指针，这主要取决于硬件和操作系统的设计和架构。所以不能说：32位系统就是4字节指针*/

// Niuke_组队竞赛

// bool foo(vector<int> &v)
// {
//   int sum = 0;

//   for (int i = 0; i < 3; i++)
//   {
//     sum += v[i];
//   }
// }
// int main()
// {
//   int n;
//   std::cin >> n;
//   vector<int> vec;
//   for (int i = 0; i < 3 * n; i++)
//   {
//     int e;
//     vec.push_back(e);
//   }
//   int result;
//   foo(vector<int> v);
// }

/*分析：将所有数存入arr数组中，竞赛时分组要使得所有组的中位数之和最大，可以先将数组进行排序(从小到大)
每次都取数组中最小的一个、最大的一个和次大的一个，这样可以保证每次分组中拿到最大的可能的数
如：1 2 3 4 5 6 7 8 9
分组：189 267 345
则中位数最大和为 8+6+4=18，可以看出这些中位数所在的下标都是有规律的，都是v.size()减一些值，
计算这几个数的下标公式：arr.length() - 2 * (i + 1)*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n; // 要分的组数
  while (std::cin >> n)
  {
    int sum = 0;
    std::vector<int> v;
    v.resize(n * 3);
    for (int i = 0; i < n * 3; i++)
    {
      std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
      sum += v[v.size() - 2 * (i + 1)];
    }
    std::cout << sum << std::endl;
  }
}