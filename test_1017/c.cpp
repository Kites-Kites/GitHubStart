#include <iostream>
using namespace std;

class A
{
public:
  A()
  {
    cout << 1;
  }
};
class B
{
public:
  B(A &other)
      : z(other) // z and obj1 are same;
  {
    cout << 2;
  }

private:
  A &z;
};

int main()
{
  A obj1;
  B obj2(obj1);
}