#include <iostream>
#include <string>
using namespace std;
class A
{
  friend long fun(A s)

  {
    if (s.x < 3)
    {
      return 1;
    }
    return s.x + fun(A(s.x - 1));
  }

public:
  A(long a) { x = a--; }

private:
  long x;
};

int main()
{
  int sum = 0;
  for (int i = 0; i < 5; i++)
  {
    sum += fun(A(i));
  }
  cout << sum;
  return 0;
}