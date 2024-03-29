#include <iostream>
using std::string;
// not #include<string>
int main()
{
  string s, t;
  while (std::cin >> s >> t)
  {
    int res = 0;
    size_t pos = s.find(t, 0);
    while (pos != string::npos) // not string.npos;
    {
      res++;
      pos = s.find(t, t.size() + pos);
    }
    std::cout << res << std::endl;
  }
}