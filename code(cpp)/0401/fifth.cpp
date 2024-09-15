#include<iostream>
int main()
{
  printf("-1"); // 在内存中被存储为['-', '1', '\0']

  int n = -1;
  printf("%d", n);
  //存的是补码（全一）
  
}

//在控制台上看是一样的