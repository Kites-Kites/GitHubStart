// 编程题
//  input:2012 12 31
// output:366(这是2012年的第366天)

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Date
{
public:
  Date(int y, int m, int d)
      : year(y), month(m), day(d) {}

  int daysBetweenDates();

private:
  int year;
  int month;
  int day;
};

bool isLeapYear(int year)
{
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDay(int year, int month)
{
  int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2)
    return isLeapYear(year) ? 29 : 28;
  return arr[month];
}

int Date::daysBetweenDates()
{
  int days = day;
  for (int i = 1; i < month; i++)
  {
    days += getDay(year, i);
  }
  return days;
}

int main()
{
  int year, month, day;
  cin >> year >> month >> day;

  Date d1(year, month, day);
  int ans = d1.daysBetweenDates();
  cout << ans;
  return 0;
}
