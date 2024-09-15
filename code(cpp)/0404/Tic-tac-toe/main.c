/*
1. 完成三子棋游戏代码
2. 并将三子棋的设计和代码完成一篇博客。*/
//not #include<game.h>
#include"game.h"
void menu()
{
  printf("Welcome to Tic-tac-toe!\n");
  printf("please to input 1-play!\n");
  printf("please to input 0-exit!\n");
}

void game()
{
  char ch;
  srand((unsigned int)time(NULL));
  char board[ROW][COL];
  init(board, ROW, COL);
  print(board, ROW, COL);
  while (1)
  {
    player_move(board, ROW, COL);
    print(board, ROW, COL);
    ch = check(board,ROW,COL);
    if(ch!='C')
    {
      break;
    }
    computer_move(board, ROW, COL);
    print(board, ROW, COL);
    ch = check(board, ROW, COL);
    if(ch!='C')
    {
      break;
    }
  }
  if (ch == '*')
  {
    printf("user is win!\n");
  }
  else if (ch == '#')
  {
    printf("computer is win!\n");
  }
  else if (ch == 'Q')
  {
    printf("This game is a draw!\n");
  }
}
int main()
{
  int input;
  // while(1)
  // {
  //   menu();
  //   scanf("%d", &n);
  //   switch (n)
  //   {
  //   case 1:
  //     play();
  //     break;
  //   case 0:
  //     printf("Welcome to play again!\n");
  //     return 0;//差点不知道怎么既能退出switch也能退出while(1),差点就用了goto语句....
  //   default:
  //     printf("input error and please input again!\n");
  //   }
  // }

  do
  {
    menu();
    scanf("%d", &input); // 写成了scanf("%d",input);所以每次一输入值就推出了
    switch (input)
    {
      case 1:
        game();
        break;
      case 0:
        printf("Welcome to play next time!\n");
        break;
      default:
        printf("input error!\n");
        break;
    }
  }while (input);
  return 0;
}