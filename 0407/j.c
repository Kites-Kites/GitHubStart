/*有序序列判断——BC96*/

//error code只能判断升序，无法判断降序
#include <stdbool.h>
#include <stdio.h>
int g[50];
bool flag = false;
int _max(int a, int b)
{
  return a >= b ? a : b;
}
int main()
{
  int n, i = 0;
  scanf("%d", &n);
  for (; i < n; i++)
    scanf("%d", &g[i]);
  i = 0;
  int res = g[0];
  while (i < n - 1)//not while(i<n)
  {
    if (g[i + 1] >= g[i] && g[i + 1] >= res)
    {
      res = _max(res, g[i + 1]);
      ++i;
    }
    else
    {
      flag = true;
      break;
    }
  }
  if (flag)
    printf("unsorted");
  else
    printf("sorted");
}
// correct code;
#include <stdio.h>
int g[50];
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &g[i]);
  int i = 0;
  int cnt1 = 0, cnt2 = 0;
  while (i < n - 1)//not while(i<n),那样如果i==n-1时，下面那句g[i+1]就会越界，造成结果错误甚至越界
  {
    if (g[i + 1] > g[i])
      cnt1++;
    else
      cnt2++;
    ++i;
  }
  if (cnt1 == n - 1 || cnt2 == n - 1)
    printf("sorted");
  else
    printf("unsorted");
}