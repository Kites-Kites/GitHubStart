#include <iostream>
using namespace std;

class Person
{
public:
  void PersonInfo();
  void Init(int, string);

private:
  int _age;
  string _name;
};

class Date
{
public:
  void Init(int year, int month, int day);
  void Print();

private:
  int _year = 2021;
  int _month = 10;
  int _day = 20; // 内置类型成员变量在类中声明时可以给默认值(C++11)。
};