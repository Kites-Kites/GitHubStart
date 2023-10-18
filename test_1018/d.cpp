#include <iostream>
using namespace std;

int main()
{
  char arr[14] = {(char)100}; // not char arr[14]=(char)100;
  for (int i = 0; i < 14; i++)
  {
    cout << arr[i] << endl; // 只有第一个元素被初始化了：
  }
  cout << sizeof(arr);
}