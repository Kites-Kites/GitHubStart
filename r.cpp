#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
  Printer(string name) { cout << name; }
};
class Container
{
public:
  Container()
      : b("b"), a("a") {}
  Printer a;
  Printer b;
};
int main()
{
  Container c;
  return 0;
}