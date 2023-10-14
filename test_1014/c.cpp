#include <iostream>
using namespace std;
class myClass
{
public:
  myClass() { cout << 1; }
};

int main()
{
  // myClass c1, *c2;
  myClass *c3 = new myClass();
  delete c3;
  cout << endl;
  myClass *c1 = new myClass;
  // myClass &c4 = c1;
}