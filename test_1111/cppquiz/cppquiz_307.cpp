#include<iostream>
#include<typeinfo>
//c++17 succeed! c++20 failed!in C++20 (P1008R1)this code would be a guaranteed compile error.
struct S{
  S() = delete;//delete default constructor
  /*在C++中，如果你没有为一个类或结构体提供自定义构造函数，编译器会自动生成一个默认构造函数。然而，有时你可能希望阻止某些操作或者让编译器生成的构造函数无效。这就是"= delete"的作用。*/
  /*这种技巧在一些情况下很有用，比如你希望某个特定类型的对象不能被默认构造，只能通过自定义构造函数创建。这可以增加类型的安全性和明确性。*/
  int x;
  int y;
};
//1.  S没有用户提供的构造函数（如果函数是user-provided的,when用户声明且声明的时候no explicitly defaulted or deleted!所以S是没有user-privided的构造函数的  2.并且没有inherited constructors, no private or protected non-static data members, no virtual functions, and no virtual, private, or protected base classes.所以struct S满足aggregate的条件，所以它用了聚合初始化，没有call any constructor.  3.括号中没有元素，根据“If there are fewer initializer-clauses in the list than there are elements in a non-union aggregate, then each element not explicitly initialized is initialized as follows: (...) the element is copy-initialized from an empty initializer list.”它将被copy-initialized from an empty initalizer list.   4. initializing from an empty initializer list 导致value-initialization.

int main(){
  auto s = S{};
  std::cout<<s.x<<'\n';
  std::cout<<s.y<<'\n';

  int **p{};
  std::cout<<typeid(p).name()<<'\n';
  if(!p)
  {
    std::cout<<"initialized to null pointer"<<'\n';
  }

  int k{};//initialize to 0
  std::cout<<k<<'\n';

  int j{7};//initialize to 7
  std::cout<<j<<'\n';
  return 0;
}