/*删除数组中指定元素*/
#include <stdio.h>

int main()
{
  int n = 0;
  int arr[50] = {0};
  int del = 0;
  scanf("%d", &n);
  int i = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  scanf("%d", &del);
  int j = 0;
  for (i = 0; i < n; i++)
  {
    if (arr[i] != del)
    {
      arr[j++] = arr[i]; // 这里的j就像是一个指针一样，让i在前面跑，让j管理“合格”的元素，只有不是要删除的元素时j++;
    }
  }

  for (i = 0; i < j; i++) // 打印时也得注意，以j作为右端点打印，因为有多个要删除的元素在[j,i]之间;
  {
    printf("%d ", arr[i]);
  }
  return 0;
}