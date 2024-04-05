#include"game.h"

void menu()
{
  printf("input 1 to play game\n");
  printf("input 0 to exit game\n");
}
void game()
{
  char mine[ROWS][COLS];
  char show[ROWS][COLS];
  init(mine,ROWS,COLS,'0');
  init(show, ROWS, COLS, '*');
  setmine(mine, ROW, COL);
  display_board(show, ROW, COL);

  display_board(mine, ROW, COL);
  find_mine(mine, show, ROW, COL);
}
int main()
{
  srand((unsigned int)time(NULL));
  int input;
  do
  {
    menu();
    scanf("%d", &input);
    switch (input)
    {
    case 1:
      game();
      break;
    case 0:
      printf("exit game()!\n");
      break;
    default:
      printf("input error!\n");
      break;
    }
  } while (input);
}