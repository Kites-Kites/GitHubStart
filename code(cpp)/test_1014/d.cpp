#include <iostream>
using namespace std;
int f1()
{
  cout << 1;
}
// who have *this?why?
class T
{
public:
  static int f2();

private:
  friend int f3();

protected:
  int f4();
};
