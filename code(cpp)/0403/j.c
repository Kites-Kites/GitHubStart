#include<stdio.h>
/*将数组A中的内容和数组B中的内容进行交换。（数组一样大）*/
void error_swap(int *p,int*q,int len)
{
  for (int i = 0; i < len;i++)
  {
    for (int j = 0; j < len;j++)
    {
      int temp = p[i];
      p[i] = q[j];
      q[j] = temp;
    }
  }
}
void __swap(int *p, int *q, int len)
{
  for (int i = 0; i < len; i++)
  {
      int temp = p[i];
      p[i] = q[i];
      q[i] = temp;
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4};
  int len = sizeof(arr) / sizeof(int);
  int arr2[] = {4, 5, 6, 7};
  for (int i = 0; i < 4; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  for (int i = 0; i < 4; i++)
  {
    printf("%d ", arr2[i]);
  }
  printf("\nafter swap:\n");
  __swap(arr, arr2,len);
  for (int i = 0; i < 4;i++)
  {
      printf("%d ", arr[i]);
  }
  printf("\n");
  for (int i = 0; i < 4; i++)
  {
    printf("%d ", arr2[i]);
  }
  printf("\n");
}