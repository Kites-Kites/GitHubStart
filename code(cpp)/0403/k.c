#include<stdio.h>
#define len 5
// void init(int arr[])
// {
//   for (int i = 0; i < len;i++)
//     arr[i] = 0;
// }
void init(int *p)
{
  for (int i = 0; i < len;i++)
  {
    *p++ = 0;
  }
}
// void print(int arr[])
// {
//   for (int i = 0; i < len;i++)
//   {
//     printf("%d ", arr[i]);
//   }
// }
void print(int *p)
{
  for (int i = 0; i < len; i++)
    printf("%d ", *p++);
}
// void reverse(int *p)
// {
//   int l = 0, r = len - 1;
//   while((l++)<=(r--))
//   {
//     int temp = p[l];
//     p[l] = p[r];
//     p[r] = temp;
//   }
// }
void reverse(int *p, int l, int r)
{
  if (l >= r)
    return;
  int temp = p[l];
  p[l] = p[r];
  p[r] = temp;
  reverse(p, l + 1, r - 1);
}

int main()
{
  int arr[len];
  init(arr);
  arr[2] = 5;
  arr[1] = 1;
  print(arr);
  printf("\n");
  reverse(arr,0,len-1);
  print(arr);
  printf("\n");
  return 0;
}