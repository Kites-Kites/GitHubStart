#include <iostream>
using namespace std;
class parent
{
private:
  int i;

protected:
  int x;

public:
  parent()
  {
    x = 0;
    i = 0;
  }
  void change()
  {
    x++;
    i++;
  }
  void display();
};

class son : public parent
{
public:
  void modify();
};

void parent::display()
{
  cout << x << " " << i << endl;
}
void son::modify()
{
  x++;
}

int main()
{
  son A; // 创建派生类对象时，先调用基类构造，再调用派生类构造
  parent B;
  A.display(); // x=0;i=0;
  A.change();  // x==1;i=0;
  A.modify();  // x==2;
  B.change();  // x==1;i==1;
  B.display();
  cout << endl;
  A.display(); // x=2;i=1;//i变为1是被B.change();改变的
  return 0;
}