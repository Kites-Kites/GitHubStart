#include<stdio.h>
typedef
struct Stu
{
  char arr[5];
  int age;
} student;
int main()
{
  student s1 = {"Kite", 18};
  printf("%s %d \n", s1.arr, s1.age);
}

// typedef是一个关键字
// switch 是分支语句，不是循环，因此continue不能用在里面，continue是用于结束本次循环的;

//C语言内置类型
//     char      // 字符数据类型
//     short     // 短整型
//     int       // 整形
//     long      // 长整型
//     long long // 更长的整形
//     float     // 单精度浮点数
//     double    // 双精度浮点数

// https://www.bilibili.com/video/BV1hf4y1W7yT/?vd_source=355fe13b62ac41072b7ac70adc02bd34

//That is the tutorial of gitee.