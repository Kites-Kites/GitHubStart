#include <iostream>
#include <vector>
using namespace std;
// Niuke_年终奖
class Bonus
{
public:
  int getMost(vector<vector<int>> board) // 第一次写成了vector<vector<int>>board
  {
    int dp[6][6];
    dp[0][0] = board[0][0];
    for (int i = 0; i < 6; i++)
    {
      for (int j = 0; j < 6; j++)
      {
        if (i == 0 && j == 0)
          continue;
        else
        {
          dp[i][j] = max((i == 0) ? 0 : dp[i - 1][j], (j == 0) ? 0 : dp[i][j - 1]) + board[i][j];
        }
      }
    }
    return dp[5][5];
  }
};