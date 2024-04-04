/*
编写代码在一个整形有序数组中查找具体的某个数

要求：找到了就打印数字所在的下标，找不到则输出：找不到。*/

// error code;because you have no set if(arr[mid]==val)return mid;
//  #include<stdio.h>
//  int main()
//  {
//    int arr[] = {1, 5, 6, 8, 9, 11, 25, 66, 99, 100};
//    int val = 11;
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int left = 0, right = len - 1;
//    while(left<=right)
//    {
//      int mid = (right+left)/2;
//      if(arr[mid]>val)
//      {
//        right = mid - 1;
//      }
//      else{
//        left = mid;
//      }
//    }
//    printf("%d\n", left);
//  }

int binary_search(int arr[],int size,int val)
{
  // 切记：将数组作为函数参数传递时，它实际上被视为指针。因此，在 sizeof(arr) 中，arr 实际上是指向 int 的指针，而不是整个数组
  /*int right = sizeof(arr) / sizeof(int) - 1;*/
  int left = 0;
  int right = size - 1;
  while(left<right)
  {
    //error code!
    //int mid = left + right + 1 >> 1; // 这个不能放在循环外部，每次left,right变化都需要设置新的mid;
    int mid = left + (right - left) / 2;
    if(arr[mid]==val)
    {
      return mid;
    }
    else if(arr[mid]>val)
    {
      right = mid;
    }
    else {
      left = mid;
    }
  }
  return -1;
}

#include<stdio.h>
int main()
{
  int arr[] = {1, 5, 6, 8, 9, 11, 25, 66, 99, 100};
  int size = sizeof(arr) / sizeof(int);
  int val = 1;
  int ans = binary_search(arr,size, val);
  printf("%d\n", ans);
  return 0;
}