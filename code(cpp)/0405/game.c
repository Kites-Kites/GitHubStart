#include"game.h"

void init(char board[ROWS][COLS], int rows, int cols, char set)
{
 
  for(int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols;j++)
    {
      board[i][j] = set;
    }
  }
}
void display_board(char board[ROWS][COLS], int row, int col)
{
  printf("----------------------\n");
  ;
  int i = 0;
  for (; i <= col;i++)
  {
    printf("%d ", i);
  }
  printf("\n");
  int j = 0;
  for (i = 1; i <= row;i++)
  {
    printf("%d ", i);
    for (j = 1; j <= col;j++)
    {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }
  printf("----------------------\n");
}

void setmine(char board[ROWS][COLS], int row, int col)
{
  int count = MINE_COUNT;
  while(count)
  {
  int x = rand() % row + 1;
  int y = rand() % col + 1;
  if(board[x][y]=='0')
  {
  board[x][y] = '1';
  count--;
  }
  }
}
int get_mines(char board[ROWS][COLS],int x,int y)
{
  return board[x - 1][y + 1] + 
  board[x][y + 1] +
   board[x][y - 1] +
    board[x + 1][y] +
     board[x + 1][y + 1] +
      board[x - 1][y - 1]+
      board[x-1][y]+
      board[x+1][y]-'0'*8;
}
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
  int x, y,win = 0;
  while((row*col-MINE_COUNT)>=win)
  {
    printf("please input your x and y:>\n");
    scanf("%d %d", &x, &y);
    if(x>=1&&x<=row&&y>=1&&y<=col)
    {
      if(show[x][y]!='*')
      {
        printf("this x and y already!\n");
        continue;
      }
      if(mine[x][y]=='1')
      {
        printf("I'm sorry! there is a thunder here!\n");
        display_board(mine, row, col);
        break;
      }
      else
      {
        show[x][y] = '0'+get_mines(mine, x, y);
        display_board(show,ROW,COL);
        win++;
      }
    }
    else{
      printf("input error!\n");
    }
  }
  if ((row * col - MINE_COUNT) == win)
  {
    printf("congratulations!\n");
    display_board(mine, row, col);
  }
}