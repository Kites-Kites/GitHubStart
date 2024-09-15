// leetcode.485
// 就一句代码不一样，为啥就通不过？
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int findMaxConsecutiveOnes(vector<int> &nums)
  {
    int res = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 0)
        continue;
      int j = i + 1;
      while (j < nums.size() && nums[j] == 1)
        j++; // correct!
      // while (nums[j] == 1 && j < nums.size())//error!
      j++;

      res = max(res, j - i);
      i = j;
    }
    return res;
  }
};