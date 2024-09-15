#include <stdio.h>

int main()
{
  int score[10] = {0};
  int val;
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &score[i]);//从键盘读入值放到score[i]中去
    // scanf函数返回成功读入的数据项数，读入数据时遇到了“文件结束”则返回EOF。
    // 按用户指定的格式从键盘上把数据输入到指定的变量之中
    printf("%d ", score[i]);//把score[i]中的值格式化输出
  }
  return 0;
}
// the cpp code:直接一边输入一边输出hahaha
// while (std::cin >> n)
//   std::cout << n << " ";
