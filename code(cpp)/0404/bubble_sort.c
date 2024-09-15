/*实现一个对整形数组的冒泡排序*/

//method_first
void bubble_sort(int* p,int len)
{
  for (int i = len; i > 0;i--)
  {
    int *q = p;
    for (int j = 0; j < i-1;j++)
    {
      if (*q > *(q + 1))
      {
        int temp = *q;
        *q = *(q + 1);
        *(q + 1) = temp;
      }
      ++q;
    }
  }
}
//method_second
void bubbleSort(int arr[],int len)
{
  for (int i = 0; i < len - 1;i++)
  {
    for (int j = 0; j < len - i - 1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

#include<stdio.h>
int main()
{
  int arr[] = {42, 87, 15, 63, 29, 54, 10, 78, 36, 91, 22, 57, 8, 45, 73, 19, 66, 31, 95, 12, 70, 38, 83, 25, 60};
  int len = sizeof(arr) / sizeof(int);
  bubble_sort(arr,len);
  for (int i = 0; i < len;i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}