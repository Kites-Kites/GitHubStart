/*
输入一个整数数组，实现一个函数，

来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，

所有偶数位于数组的后半部分。*/
#include<stdio.h>
void fun(int* p,int len)
{
  int left = 0, right = len - 1;
  while (left<right)
  {
    while(p[left]%2!=0)
      left++;
    while (left < right && p[right] % 2 == 0) // caution:left<right;
      right--;
    int temp = p[left];
    p[left] = p[right];
    p[right] = temp;
    ++left;
    --right;
  }

}
int main()
{
  int arr[] = {47, 83, 12, 65, 29, 94, 18, 53, 76, 40};
  int len = sizeof(arr) / sizeof(int);
  printf("later:\n");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  fun(arr, len);
  printf("Now:\n");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }

}

// 不足：会让原有元素失序！,下面的c++代码利用“前偶后奇”可以保证稳定性;
class Solution{
public:
  void reOrderArray(vector<int> &array)
  {

    for (int i = 0; i < array.size(); i++)
    {
      for (int j = array.size() - 1; j > i; j--)
      {
        if (array[j] % 2 == 1 && array[j - 1] % 2 == 0) // 前偶后奇交换
        {
          swap(array[j], array[j - 1]);
        }
      }
    }
  }
};