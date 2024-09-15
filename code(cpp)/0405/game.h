#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define MINE_COUNT 5
void init(char board[ROWS][COLS], int rows, int cols, char set);
void display_board(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col);
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);
