// c++11:变参模板  别名模板  移动语义  右值引用  完美转发
// c++14:变量模板  泛型lambda
// c++17:编译期if  折叠表达式  类模板参数推导
#include "template_max.h"
#include <iostream>
#include <string>
int main()
{
  std::string str1 = "hanyan";
  std::string str2 = "hanxian";
  std::cout << ::max(str1, str2) << std::endl; // hanyan,why not max(str1,str2)?
                                               // because:c++标准库也有一个max的函数模板，所以如果单纯调用max(str1,str2);时会发生歧义，所以用全局作用域运算符指定我们使用全局作用域的max，当然还有另一种方法：将max放在自命名的namespace中，然后在.cpp文件中包含该.h文件，然后using namespace my_space;即可

  double a = 4.10;
  double b = 4.21;
  std::cout << ::max(a, b) << std::endl; // 4.21,why not max(a,b)?
}