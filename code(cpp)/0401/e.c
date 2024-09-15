int func(int a)
{
  int b;
  switch (a)
  {
  case 1:
    b = 30;
  case 2:
    b = 20;
  case 3:
    b = 16;
  default:
    b = 0;
  }
  return b;
}
// standard code:
switch (expression)
{
case /* constant-expression */:
  /* code */
  break;

default:
  break;
}
// case语句后一般放整形结果的常量表达式或者枚举类型，枚举类型也可以看成是一个特殊的常量
// 注：上面那个expression只能是整形和枚举类型，而不能是其他的（int*.....）
// 注:char在C语言中也被认为是整形？
char c = 'a';
switch (c)
{
case 'a':
  // 代码块
  break;
case 'b':
  // 代码块
  break;
default:
  // 默认代码块
}
