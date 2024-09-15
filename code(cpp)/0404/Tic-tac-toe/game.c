#include"game.h"

void init(char board[ROW][COL],int row,int col)
{
  for (int i = 0; i < row;i++)
  {
    for (int j = 0; j < col;j++)
    {
      // board[i][j] = " ";
      board[i][j] = ' ';
    }
  }
}
void print(char board[ROW][COL], int row, int col)//切记：i是和row在一起的，j是和col在一起的，是否要打印|看的是列，是否要打印---看的是行（如果行不符合要求，那就不进入那一个循环）
{
  for (int i = 0; i < row;i++)
  {
    for (int j = 0; j < col;j++)
    {
      printf(" %c ", board[i][j]);
      if(j<col-1)
        printf("|");
    }
    printf("\n");
    if(i<row-1)
    {
    for (int j = 0; j < col;j++)
    {
      printf("---");
      if(j<col-1)
        printf("|");
    }
    
    printf("\n");
    }
  }
}
void player_move(char board[ROW][COL], int row, int col)
{
  printf("hello player! please input:> ");
  int x, y;
  while(1)
  {
  scanf("%d %d", &x, &y);
  if(x>=1&&x<=row&&y>=1&&y<=col)
  {
    --x;
    --y;
    if(board[x][y]==' ')
    {
      board[x][y] = '*';
      break;
    }
    else{
      printf("your input is busy,and you should input again.\n");
    }

  }
  else
  {
    printf("your input error,and you should input again.\n");
  }
  }
}
void computer_move(char board[ROW][COL], int row, int col)
{
  printf("computer input:>\n");
  while(1)
  {
  int x = rand() % 3;
  int y = rand() % 3;
  if(board[x][y]==' ')
  {
    board[x][y] = '#';
    break;
  }
  }
}

int is_full(char board[ROW][COL], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (board[i][j] == ' ')
        return 0;
    }
  }
  return 1;
}
char check(char board[ROW][COL], int row, int col)
{
  /*在 C 语言中，== 运算符不能用于同时比较多个值。你应该分别比较每个元素，或者使用逻辑运算符 && 将它们连接起来。*/
  // for (int i = 0; i < row;i++)
  // {
  //     if((board[i][0]==board[i][1]==board[i][2])&&board[i][0]!=' ')
  //     {
  //       return board[i][0];
  //     }
  // }
  // for (int i = 0; i < col;i++)
  // {
  //   if ((board[0][i] == board[1][i] == board[2][i]) && board[0][i] != ' ')
  //   {
  //     return board[0][i];
  //   }
  // }
  for (int i = 0; i < row;i++)
  {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
    {
      return board[i][0];
    }
  }
  for (int i = 0; i < col; i++)
  {
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
    {
      return board[0][i];
    }
  }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
      return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
      return board[1][1];
    }
    if (is_full(board, row, col))
    {
      return 'Q';
    }
    return 'C';
}