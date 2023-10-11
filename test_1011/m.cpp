#include <iostream>
#include <string>
using namespace std;
template <typename T>
T Add(T a, T b)
{
  return a + b;
}
int main()
{
  int result = Add(1, 3);
  cout << result << endl;
  double result2 = Add(1.2, 2.6);
  cout << result2 << endl;
}
