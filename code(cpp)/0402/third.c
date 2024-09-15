#include<stdio.h>
int main()
{
  int arr[10] = {0};
  int max = -__INT_MAX__;
  for (int i = 0; i < 10;i++)
  {
    scanf("%d", &arr[i]);
    if(arr[i]>max)
    {
      max = arr[i];
    }

  }
  printf("%d \n", max);
}