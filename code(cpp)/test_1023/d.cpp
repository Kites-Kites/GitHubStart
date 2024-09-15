#include <iostream>
using namespace std;
// 快速排序_yxc
void quick_sort(int q[], int l, int r)
{
  if (l >= r) /*如果 l 大于等于 r，即子数组只包含一个或没有元素，排序完成*/
    return;

  int i = l - 1, j = r + 1, x = q[l + r >> 1]; // 相当于q[(l+r)/2];
  while (i < j)
  {
    do
      i++;
    while (q[i] < x); /*内部的两个 do...while 循环用来找到需要交换的元素。在第一个循环中，i 递增，直到找到一个大于或等于 x 的元素，停下来。在第二个循环中，j 递减，直到找到一个小于或等于 x 的元素，停下来。*/
    do
      j--;
    while (q[j] > x);
    if (i < j)
      swap(q[i], q[j]);
  }
  quick_sort(q, l, j), quick_sort(q, j + 1, r); /*函数递归地对左半部分（l 到 j）和右半部分（j+1 到 r）进行排序。*/
}
int main()
{
  int arr[] = {1, 5, 6, 1, 2, 7, 8, 9, 12, 21, 1, 10, 45, 29, 3, 5};
  int length = sizeof(arr) / sizeof(arr[0]);
  quick_sort(arr, 0, length - 1);
  for (auto e : arr)
  {
    cout << e << " ";
  }
  cout << endl;
  return 0;
}