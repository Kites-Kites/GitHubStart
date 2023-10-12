// 牛客
// 满二叉树按照序号方式编号，求最近公共祖先
// 思路：根据满二叉树性质：子节点和根节点的关系是2倍关系，也就是说：那两个子节点肯定都是答案节点2的倍数，所以只要：总让数值大的那个节点除以二，往答案上靠，相等的时候就是答案节点！

#include <iostream>
using namespace std;
class LCA
{
public:
  int getLCA(int a, int b)
  {
    while (a != b)
    {
      if (a > b)
        a /= 2;
      else
        b /= 2;
    }
    return a;
  }
};
