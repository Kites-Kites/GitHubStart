#include <vector>
#include <cstdio>
int main() // not-safe
{
  std::vector<int> vec{};
  vec.push_back(1);
  vec.push_back(20);
  vec.push_back(300);
  for (int i : vec)
  {
    printf("%d\n", i);
    vec.push_back(i);
  }
}