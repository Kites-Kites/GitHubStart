#include <stdio.h>
//method 1
int arr[10000];
int fun(int n)
{
    int count = 0;
    while(n!=0)
    {
        arr[count++] = n%6;
        n/=6;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans = fun(n);
    for(int i=ans-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

/*BC111 小乐乐与进制转换*/

//method 2//why?
void fun(int n){
  if(n>5)
  {
    // return fun(n / 6);
    fun(n / 6);
  }
  printf("%d", n % 6);
}