#include<stdio.h>
#include<string.h>
int main()
{
  printf("%d", strlen("C:\test\121"));
  return 0;
}

// strlen()需要包含<string.h>
//\t是一个水平制表符，算一个;
//\121是转义字符，转为十进制，查表即可，算一个;
// standard anwer:
//"c:\test\121": 在该字符串中，\t是转移字符，水平制表，跳到下一个tab的位置；而\121表示一个字符，是讲121看做8进制数组，转换为10进制后的81，作业为ASCII码值的字符，即：字符'Q' ，故上述字符串实际为："c:  estQ",只有7个有效字符