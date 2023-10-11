#include <iostream>
#include <string>
#include <vector>
using namespace std;

int passwordStrength(string str)
{
  if (str.size() <= 0)
  {
    return 0;
  }
  int sum = 0;
  int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
  if (str.size() <= 4)
    sum1 = 5;
  else if (str.size() <= 7)
    sum1 = 10;
  else
    sum1 = 25;

  vector<char> v1, v2, v3, v4;
  //...
}
int main()
{
  string str;
  cin >> str;
}