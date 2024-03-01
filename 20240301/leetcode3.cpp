// 无重复字符的最长子串
// input:hanxiann
// output:hanxian
// The difference of 子串 and 子序列 is one is 连着 and the another is 可以不连

// the problem is difficult and there is the code of yxc.
class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    int ans = 0;
    unordered_map<char, int> heap;
    for (int i = 0, j = 0; i < s.size(); i++)
    {
      heap[s[i]]++;
      while (heap[s[i]] > 1)
      {
        heap[s[j]]--;
        ++j;
      }
      ans = max(ans, i - j + 1);
    }
    return ans;
  }
};