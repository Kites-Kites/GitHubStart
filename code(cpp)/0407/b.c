/*矩阵转置*/
#include <stdio.h>

int main()
{
  int n = 0;
  int m = 0;
  scanf("%d%d", &n, &m);
  int a[n][m];
  int i = 0;
  int j = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", a[j][i]);
    }
    printf("\n");
  }
  return 0;
}