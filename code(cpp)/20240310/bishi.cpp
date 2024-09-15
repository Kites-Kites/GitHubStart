// 美国节日_Niuke

// 怎么计算某一年第一天是周几？
// result=(year-1+(year-1)/4-(year-1)/100+(year-1)/400+days)%7
// 其中year是年份，days是某一年的天数，result得出的结果0，1，2，...，6分别对应的星期天，星期一，星期二，...，星期六
// 同样，如果你想定位某年的任一天是星期几，这个公式同样适用的，不过此时的days则是这一天在这一年中的累积天数

#include <iostream>
using namespace std;
// 输入 某年某月第几个星期几，正数还是倒数，输出 几号
int WeekDay(int y, int m, int n, int w, bool B)
{
  int day, week, i = 0;
  if (m == 1)
  {
    m = 13;
    y--;
  }
  if (m == 2)
  {
    m = 14;
    y--;
  }
  for (day = B ? 1 : 31; day <= B ? 31 : 1; B ? (day++) : (day--))
  {
    week = (day + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7; // 根据蔡勒公式，输入一个日子，他告诉你星期几
    if (week + 1 == w)                                                          // 是星期一了？那就加个1
      ++i;
    if (i == n) // 已经到了要求的比如第三个星期一了，那就break;
      break;
    /*计数器 i 的作用：
在循环中，程序会不断地使用蔡勒公式计算每一天对应的星期。如果计算得到的星期与输入的星期 w 相符，则增加计数器 i。这样做的目的是统计符合条件的日期数量。

判断条件：
在每次循环中，程序会检查计数器 i 是否等于输入的第几个星期 n。如果相等，则说明找到了符合条件的日期，程序跳出循环，返回当前日期 day。*/
  }
  return day;
}
int main(void)
{
  int year;
  while (cin >> year)
  {
    cout << year << "-01-01" << endl; // 元旦
    // WeekDay(年，月，第几个星期，星期几，正数1倒数0)
    printf("%d-01-%02d\n", year, WeekDay(year, 1, 3, 1, 1));
    printf("%d-02-%02d\n", year, WeekDay(year, 2, 3, 1, 1));
    printf("%d-05-%02d\n", year, WeekDay(year, 5, 1, 1, 0));
    cout << year << "-07-04" << endl;
    printf("%d-09-%02d\n", year, WeekDay(year, 9, 1, 1, 1));
    printf("%d-11-%02d\n", year, WeekDay(year, 11, 4, 4, 1));
    cout << year << "-12-25" << endl
         << endl;
  }
  return 0;
}