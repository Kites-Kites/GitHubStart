// niuke
// input:3
//       1 1 1
// output:2
// 输入一个袋子中总的球数和球上的号码，你可以从中拿掉0-(n-1)个球，如果袋中球的号码和大于积，则ans++;
// 输出ans;

/*这段代码的目标是计算一个整数数组 x 中，存在多少个子集（可以是空集，也可以包含一个或多个元素），使得子集中的元素之和大于子集中的元素之积。
 */

// error!

#include <iostream>
#include <vector>

using namespace std;

bool isLucky(vector<int> &v)
{
  int sum = 0, product = 1;
  for (int e : v)
  {
    sum += e;
    product *= e;
  }
  return sum > product ? true : false;
}

int main()
{
  int ans = 0;
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int i = 0; i < n; i++)
  {
    vector<int> temp;
    for (int j = 0; j < n; j++)
    {
      if (i != j)
      {
        temp.push_back(v[j]);
      }
    }
    if (isLucky(temp))
      ans++;
  }
  cout << ans << endl;
}
