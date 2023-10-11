// 井字棋_牛客
#include <iostream>
#include <vector>
using namespace std;
class Board
{
public:
  bool checkWon(vector<vector<int>> board)
  {
    int row = board.size(); // 行-row

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < row; j++)
      {
        sum += board[i][j]; // ij是统计行
      }
    }
    if (sum == row)
    {
      return true;
    }

    sum = 0;
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < row; j++)
      {
        sum += board[j][i]; // ji是统计列
      }
    }
    if (sum == row)
    {
      return true;
    }

    sum = 0;
    for (int i = 0; i < row; i++)
    {
      sum += board[i][i]; // 主对角线
    }
    if (sum == row)
    {
      return true;
    }

    sum = 0;
    for (int i = 0; i < row; i++)
    {
      sum += board[i][row - i - 1]; // 副对角线
    }
    if (sum == row)
    {
      return true;
    }

    return false;
  }
};