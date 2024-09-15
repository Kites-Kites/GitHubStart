#include <iostream>
#include <vector>
using namespace std;

void Print(vector<int> v)
{
  for (auto e : v)
  {
    cout << e << " ";
  }
  cout << endl;
}
void BubbleSort(vector<int> &v, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (v[j] > v[j + 1])
      {
        int temp = v[j];
        v[j] = v[j + 1];
        v[j + 1] = temp;
      }
    }
  }
}
int main()
{
  vector<int> v;
  int e;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> e;
    v.push_back(e);
  }
  BubbleSort(v, n); // BubbleSort(vector<int>, int n);
  Print(v);         // Print(vector<int> v);
  return 0;
}