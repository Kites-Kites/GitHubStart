#include <cstdio> //排序+dfs+简单剪枝
#include <cstring>
#include <algorithm>
int x[1002], n;
long long ans;
long long sum, mul;

void dfs(int index)
{
  for (int i = index; i < n; i++)
  {
    sum += x[i];
    mul *= x[i];
    if (sum > mul)
    {
      ans++;
      dfs(i + 1);
    }
    else if (x[i] == 1)
    {
      dfs(i + 1);
    }
    else
    {
      sum -= x[i];
      mul /= x[i];
      break; /*当我们发现将该元素添加到袋子里，总和小于总积，那么如果从小到大排列了，该元素后面的元素将都不满足条件eg:1 3 4 5,在1 3 4 的时候发现已经不符合和大于积了，后面的也就不用看了(break;)，因为和的增长幅度小于积的增长幅度*/
    }
    // 能走到这里，就是出现了重复元素eg:1 5 5 7
    sum -= x[i];
    mul /= x[i];
    for (; i < n - 1 && x[i] == x[i + 1]; i++)
      ;
  }
}
int main()
{
  // freopen("1.in", "r", stdin);如果 "1.in" 文件包含了输入数据，程序会从该文件中读取数据，而不需要手动输入。方便在本地测试和调试代码时使用
  while (scanf("%d", &n) != EOF)
  {
    ans = 0;
    sum = 0;
    mul = 1;
    for (int i = 0; i < n; i++)
      scanf("%d", x + i);
    std::sort(x, x + n);
    dfs(0);
    printf("%d\n", ans);
  }
  return 0;
}

/*
为什么要进行排序呢?
因为和的增长幅度小于积的增长幅度，

为什么1要特殊处理呢?
数字1能提高总和值但不会提高总积值（给一个数加1，实际增加了，但是乘1却没变），1的个数越多，和更有可能大于积.
*/