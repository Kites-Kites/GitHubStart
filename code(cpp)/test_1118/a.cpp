#include <iostream>
using namespace std;

class Base
{
public:
  Base() { cout << "Base Created" << endl; }
  virtual ~Base() { cout << "Base Destroyed" << endl; }
  virtual Base *func()
  {
    cout << "Base" << endl;
    return new Base();
  }
  virtual void GetA() {}
};

class Derived : public Base
{
public:
  Derived() { cout << "Derived Created" << endl; }
  ~Derived() { cout << "Derived Destroyed" << endl; }
  virtual Derived *func()
  {
    cout << "Derived" << endl;
    return new Derived();
  }

  virtual void GetA()
  {
    cout << "aaa" << endl;
  }
};

int main()
{
  // 1.
  // Base *pB = new Derived(); // Base Created---Derived Created---Derived Destroyed---Base Destroyed
  // delete pB;

  // 2.
  Base *pB = new Derived(); // Base Created---Derived Created
  Base *p = pB->func();     // Derived---Base Created---Derived Created
  delete pB;                // Derived Destroyed---Base Destroyed
  pB = nullptr;
  delete p; // Derived Destroyed---Base Destroyed
  p = nullptr;

  system("pause");
  return 0;
}