#include<iostream>
//The rules for whether a struct is an aggregate are quite complex
/*没有用户提供的构造函数：这意味着聚合不应该有由程序员显式定义的构造函数，例如默认构造函数、拷贝构造函数或移动构造函数。聚合应该依赖于编译器生成的默认构造函数。

没有显式的构造函数：与用户提供的构造函数相对，聚合不应该有通过explicit关键字显式标记的构造函数。

没有继承的构造函数：聚合不应该继承构造函数，这意味着它不应该使用基类的构造函数。

没有私有或受保护的非静态数据成员：聚合中的数据成员应该是公有的。私有和受保护的非静态数据成员不符合聚合的条件。

没有虚拟函数：聚合不应该包含任何虚拟函数。虚拟函数是用于多态性和动态绑定的，而聚合的目标通常是简单的数据和结构。

没有虚拟、私有或受保护的基类：聚合不应该继承虚拟、私有或受保护的基类。基类的类型应该是公有的。*/
struct myAggregate
{
  int key;
  std::string data;
};

int main()
{
  myAggregate myData{44,"hello"};
  std::cout<<myData.key<<":"<<myData.data<<'\n';

  myAggregate myData2 = {45,"linux"};
  std::cout<<myData2.key<<":"<<myData2.data<<'\n';

  return 0;
}