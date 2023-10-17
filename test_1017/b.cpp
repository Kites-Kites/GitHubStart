#include <iostream>
using namespace std;

class A
{
public:
  A()
  {
    cout << 1 << endl;
  }
  A(const A &other) { cout << "A copy constructor!" << endl; }
};

class B
{
public:
  B(A other)
      : z(other)
  {
    cout << 2 << endl;
  }

private:
  A z;
};

int main()
{
  A obj1;
  B obj2(obj1); // 2 次拷贝构造;
}