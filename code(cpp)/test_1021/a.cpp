#include <iostream>
using namespace std;
class A
{
public:
  ~A() { cout << 1; }
};
class B
{
public:
  virtual ~B() { cout << 2; }
};
class C : public A, public B
{
public:
  ~C() { cout << 3; }
};
int main()
{
  C *c = new C;
  B *b1 = dynamic_cast<B *>(c);  /*B *b1 = dynamic_cast<B *>(c); 的含义是将指向类C对象的指针 c 转换成指向类B对象的指针 b1。这种类型转换被称为动态类型转换，它用于处理多态情况下的指针类型转换。
 
  在这个特定的情况下，c 是一个指向类C对象的指针，而 b1 是一个指向类B对象的指针。由于类C继承自类B，所以这种类型转换是有效的。
 
  动态类型转换使用 dynamic_cast 运算符，它可以在运行时检查对象的类型信息，并确定是否可以进行指针或引用的类型转换。如果转换是有效的，dynamic_cast 返回目标类型的指针，否则返回空指针（如果指针无法转换为目标类型）。*/
  A *a2 = dynamic_cast<A *>(b1); // 此时指向B类对象的b1，被转换成了指向类A对象的a2;
  delete a2;                     // 删除的是a2所指向的对象，这个对象属于A类（因为是继承的，具体指的是C类对象中A类的部分），所以调用了A类的析构函数;
}

// 对照;

// #include <iostream>

// class A
// {
// public:
//   virtual ~A() { std::cout << 1; }
// };

// class B
// {
// public:
//   virtual ~B() { std::cout << 2; }
// };

// class C : public A, public B
// {
// public:
//   ~C() { std::cout << 3; }
// };

// int main()
// {
//   C *c = new C;
//   B *b1 = dynamic_cast<B *>(c);
//   A *a2 = dynamic_cast<A *>(b1);

//   delete a2;
//   return 0;
// }
