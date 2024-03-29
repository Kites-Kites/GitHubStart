#include <iostream>

// I am not understand.
using namespace std;
int main()
{
  int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int year1, month1, day1, year2, month2, day2;
  while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
  {
    int ret = 0;
    day1--; // 1号到1号也会盈利一天，所以提前将day1减一天方便直接做减法计算能盈利的天数
    while (year1 < year2 || month1 < month2)
    {

      // 如果前者的日期和后者的日期还不在同一个年月，则ret累加day1到月底的盈利
      // 如果是闰年的2月则一共29天，否则直接使用arr数组，另外素数月盈利与非素数月盈利不同，用三目运算符来表示
      ret += (((month1 == 2 && ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0)) ? 29 : arr[month1]) - day1) * ((month1 == 2 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 11) ? 1 : 2);

      day1 = 0; // day1来到下一个月的第一天，与上方day1--同理，这里不设置为1而是0

      if (++month1 > 12) // 月份也要向后走
      {
        month1 = 1;
        year1++;
      }
    }

    // 如果day1来到了day2所在的年月，那么用day2-day1就可以算出盈利了多少天
    cout << ret + (day2 - day1) * ((month1 == 2 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 11) ? 1 : 2) << endl;
  }
  return 0;
}