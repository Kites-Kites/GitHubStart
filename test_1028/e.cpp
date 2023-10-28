#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// no check!!!
int main()
{
  int teamSize, k;
  cout << "请输入每个team的人数和k值（用空格分隔）：";
  cin >> teamSize >> k;

  vector<int> teamSizes(teamSize);
  cout << "请输入每个团队的人数：" << endl;
  for (int i = 0; i < teamSize; i++)
  {
    cin >> teamSizes[i];
  }

  sort(teamSizes.begin(), teamSizes.end(), greater<int>()); // 对团队人数进行降序排序

  int maxSum = 0;
  int currentSum = 0;

  for (int i = 0; i < teamSize; i++)
  {
    currentSum += teamSizes[i];

    if (currentSum % k == 0)
    {
      maxSum = currentSum;
    }
  }

  cout << "最大的" << k << "的倍数，且为若干个团队人数之和为：" << maxSum << endl;

  return 0;
}
