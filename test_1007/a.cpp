#include "a.h"
void Person::PersonInfo()
{
  cout << _name << "is" << _age << endl;
}
void Person::Init(int age, string name)
{
  _age = age;
  _name = name;
}

void Date::Init(int year, int month, int day)
{
  _year = year;
  _month = month;
  _day = day;
}
void Date::Print()
{
  cout << _year << " " << _month << " " << _day << endl;
}

int main()
{
  Person p1;
  p1.Init(19, "hanxian");
  p1.PersonInfo();
  Date d1;
  d1.Init(2023, 2, 2);
  d1.Print();
  Date d2; //
  d2.Print();
  return 0;
}