//红与黑 牛客
//myCode
#include <iostream>

#include <vector>
int res = 0;
int m, n;
std::vector<std::vector<char>> vec;

void dfs(int x, int y)
{
  if (x < 0 || y < 0 || x >= m || y >= n || vec[x][y] == '#')
  {
    return;
  }
  res++;
  vec[x][y] = '#';
  dfs(x - 1, y);
  dfs(x, y - 1);
  dfs(x + 1, y);
  dfs(x, y + 1);
}
int main()
{
  while (std::cin >> m >> n)
  {
    vec.resize(m, std::vector<char>(n));
    int x, y;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        std::cin >> vec[i][j];
        if (vec[i][j] == '@')
        {
          x = i;
          y = j;
          vec[i][j] = '.';
        }
      }
      getchar();
    }

    dfs(x, y);
    std::cout << res << std::endl;
    res = 0;
  }
}
//code from ChatGPT

#include <iostream>
#include <vector>

int res = 0;
int m, n;
std::vector<std::vector<char>> vec;

void dfs(int x, int y)
{
  if (x < 0 || y < 0 || x >= m || y >= n || vec[x][y] != '.')
  {
    return;
  }
  res++;
  vec[x][y] = '@'; // Mark visited
  dfs(x - 1, y);
  dfs(x, y - 1);
  dfs(x + 1, y);
  dfs(x, y + 1);
}

int main()
{
  while (std::cin >> m >> n)
  {
    vec.resize(m, std::vector<char>(n));
    int x, y;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        std::cin >> vec[i][j];
        if (vec[i][j] == '@')
        {
          x = i;
          y = j;
          vec[i][j] = '.'; // Mark starting point as black
        }
      }
    }

    dfs(x, y);
    std::cout << res << std::endl;
    res = 0;
  }
  return 0;
}
