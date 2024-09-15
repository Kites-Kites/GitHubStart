#include<any>
#include<iostream>
/*std::any_cast 允许你从 std::any 中安全地检索值，并进行类型转换。如果提供的类型与存储在 std::any 中的数据类型不匹配，std::any_cast 会抛出 std::bad_any_cast 异常。*/
int main()
{
 std::any a = 42;
 try{
  std::cout<<std::any_cast<double>(a)<<'n'; 
 }catch(const std::bad_any_cast& e){
  std::cerr<<"Failed to cast to double: "<<e.what()<<'\n';
 }
 a = 3.14;
 std::cout<<a.type().name()<<":"<<std::any_cast<double>(a)<<'\n';
 a.reset();
 if(!a.has_value())
 {
  std::cout<<"no value\n";
 }
 a = 2;
 if(a.has_value())
 {
  std::cout<<a.type().name()<<":"<<std::any_cast<int>(a)<<'\n';
 }

 return 0;

}