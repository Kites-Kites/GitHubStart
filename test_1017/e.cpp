#include <iostream>
using namespace std;

class A
{
public:
  A(const char *s) { cout << s << endl; }
  ~A() {}
};
class B : virtual public A
{
public:
  B(const char *s1, const char *s2)
      : A(s1) { cout << s2 << endl; }
};

class C : virtual public A // 虚继承，共享同一子类对象;/*如果类 C 普通继承类 A，而类 B 也普通继承类 A，那么类 C 和类 B 将各自拥有一个独立的 A 类子对象。这可能导致"菱形继承"问题，*//另外：先初始化列表还是先打印是本题的考点
{
public:
  C(const char *s1, const char *s2)
      : A(s1) { cout << s2 << endl; }
};
class D : public B, public C
{
public:
  D(const char *s1, const char *s2, const char *s3, const char *s4)
      : B(s1, s2), C(s1, s3), A(s1)
  {
    cout << s4 << endl;
  }
};
int main()
{
  D *p = new D("class A", "class B", "class C", "class D");
  delete p;
}