#include<iostream>
#include<vector>
//五子棋 牛客
bool check(std::vector<std::string>& vec,int i,int j)
{
  if (i + 4 < 20) // not i+4<=20,因为board最大边界就是19而不是20，注意一切都是从零开始的;
  {
    int k = 1;
    for (; k <= 4;k++)
    {
      if(vec[i][j]!=vec[i+k][j])
        break;
    }
    if(k==5)
      return true;
  }
  if(j+4<20)
  {
    int k = 1;
    for (; k <= 4;k++)
    {
      if(vec[i][j]!=vec[i][j+k])break;
    }
    if(k==5)//not k==4,因为k++之后发现已经不满足循环条件了，所以已经是5才出来
      return true;
  }

  if(i+4<20&&j+4<20)
  {
    int k = 1;
    for (; k <= 4;k++)
    {
      if(vec[i][j]!=vec[i+k][j+k])
      {
        break;
      }

    }
    if(k==5)
      return true;
  }
  return false;
}

bool find(std::vector<std::string>& vec)
{
  bool ans;
  for (int i = 0; i < 20;i++)
  {
    for (int j = 0; j < 20;j++)
    {
      if(vec[i][j]=='.')continue;
      ans = check(vec, i, j);
      if(ans)
        return true;
    }
  }
  return false;
}
int main()
{
  std::vector<std::string> board(20);
  while(getline(std::cin,board[0]))
  {
    for (int i = 1; i < 20;i++)
    {
      getline(std::cin, board[i]);
    }
    bool ans = find(board);
    if(ans)
      std::cout << "Yes" << std::endl;
    else
      std::cout << "No" << std::endl;
  }
  
}