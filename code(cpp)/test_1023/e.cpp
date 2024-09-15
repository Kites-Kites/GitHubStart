#include <iostream>
using namespace std;

// error!

//  void quick_sort(int arr[], int left, int right)
//  {
//    int l = left, r = right;
//    int pivot = arr[l];
//    if (l >= r)
//      return;
//    while (l < r)
//    {
//      while (l < r && arr[r] >= pivot)
//      {
//        r--;
//      }
//      if (left < right)
//      {
//        arr[l] = arr[r];
//      }
//      while (l < r && arr[l] <= pivot)
//      {
//        l++;
//      }
//      if (l < r)
//      {
//        arr[r] = arr[l];
//      }
//    }
//    arr[l] = pivot;
//    quick_sort(arr, 0, l - 1);
//    quick_sort(arr, l + 1, r);
//  }

// correct!

void quick_sort(int arr[], int l, int r)
{
  if (l >= r)
    return;

  int pivot = arr[l];
  int left = l, right = r;

  while (left < right)
  {
    while (left < right && arr[right] >= pivot)
    {
      right--;
    }
    if (left < right)
    {
      arr[left] = arr[right];
    }

    while (left < right && arr[left] <= pivot)
    {
      left++;
    }
    if (left < right)
    {
      arr[right] = arr[left];
    }
    if (left >= right)
    {
      arr[left] = pivot;
    }
  }

  quick_sort(arr, l, left - 1);
  quick_sort(arr, left + 1, r);
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  quick_sort(arr, 0, n - 1);
  for (auto e : arr)
  {
    cout << e << " ";
  }
  return 0;
}