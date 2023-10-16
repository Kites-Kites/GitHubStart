#include <iostream>
using namespace std;
class B
{
public:
  B()
  {
    cout << "default constructor " << endl;
  }
  ~B() { cout << "destruted" << endl; }
  B(int i)
      : data(i)
  {
    cout << "constructed by parameter" << data << " ";
  }
  B(const B &other) // 默认的“值拷贝”,就是这个函数构造了temp;
  {
    data = other.data;
    cout << "hello" << endl;
  }

private:
  int data;
};

B play(B b)
{
  return b;
}

int main()
{
  B temp = play(5); // 采用带有初始化列表的构造函数构造局部对象b,编译器一看该对象将被用来构造temp；故不急着析构，利用默认的值拷贝来构造temp;
  return 0;         // 当temp被构造出来&&语句结束，局部的b就被析构，随着main函数结束，temp也被析;
}