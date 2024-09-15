#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 树根_Niuke

int main()
{
  string str = "";
  int num = 0; // str对应的数字;
  int sum = 0; // answer
  while (cin >> str)
  {
    getchar();
    for (auto e : str)
      num += (e - '0');
    while (num)
    {
      sum += (num % 10);
      num /= 10;
      if (num == 0 && sum > 9)
      {
        num = sum;
        sum = 0;
      }
    }
    cout << sum << endl;
    sum = 0;
    str = "";
  }
  return 0;
}