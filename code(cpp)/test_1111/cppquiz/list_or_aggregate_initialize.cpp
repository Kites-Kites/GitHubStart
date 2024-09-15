#include<iostream>
#include<vector>

struct Point
{
  int x;
  int y;
};
int main()
{
  //List initialize列表初始化
  std::vector<int> v{1,2,3};

  std::string str{'h','e','l','l','o'};

  //aggregate initialize聚合初始化
    //如果p是聚合类型，避免auto的使用
  //auto p = {1,5};//p会被推导为std::initializer_list<int>而非期望的Point,下句也错误因为std::initializer_list对象p上没有名为 x，y 的成员
  //std::cout<<p.x<<" "<<p.y<<'\n';//error!

  char arr[5] = {'h','e','l','l','o'};

  //总的可以分为两种：

  //1.直接列表初始化
  //T t{arg1,arg2};

  //2.拷贝列表初始化
  //T t  = {arg1,arg2};
  //但是和auto配合往往不尽人意，所以c++17强化了规则

  //after c++17(c++17强化了auto的推导)
  //对于直接列表初始化，如果列表具有单个元素，则会推导类型为T，当列表具有多个元素时不合法。
  //对于拷贝列表初始化，如果所有元素类型相同，则会推导类型为std::initializer_list<int>

  auto q{7};//int
  //auto w{7,8};//error!
  auto e = {7};//std::initializer_list<int>

  auto u = {90};
  std::cout<<typeid(u).name()<<'\n';//Print St16initializer_listIiE即std::initializer_list<int>
}