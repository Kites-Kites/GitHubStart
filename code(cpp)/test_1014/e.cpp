#include <iostream>
using namespace std;
class Date
{
public:
  Date(int d) { day = d; }
  Date &operator+(Date other)
  {
    this->day += other.day;
    return *this;
  }
  void getDay() { cout << this->day; }

private:
  int year;
  int month;
  int day;
};

void foo()
{
  Date d1(22);
  Date d2(1);
  Date d3 = d1 + d2;
  d3.getDay();
}
int main()
{
  foo();
}
