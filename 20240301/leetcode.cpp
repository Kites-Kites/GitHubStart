// 两数之和
// the code of me
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    vector<int> ans;
    int size = nums.size();
    for (int i = 0; i < size - 1; i++)//i不能走到最后一个
    {
      for (int j = i + 1; j < size; j++)//j总是刚开始是i+1
      {
        if (nums[j] == target - nums[i])
        {
          ans.push_back(i);
          ans.push_back(j);
          return ans;
        }
      }
    }
    return ans;
  }
};
// the code of yxc
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> heap; // 映射，此题中是下标到值的映射
    for (int i = 0; i < nums.size(); i++)
    {
      int r = target - nums[i];
      if (heap.count(r)) // 统计r在heap中出现的次数
      {
        return {heap[r], i}; // 有的话就把r元素对应的下标拿到
      }
      heap[nums[i]] = i; // 存nums[i]到heap中，它对应的键是i
    }
    return {};
  }
};
