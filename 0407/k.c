#include <stdio.h>
/*模拟实现库函数strcpy*/
char *_strcpy(char *des, const char *src)
{
  if (des == src)
    return NULL;
  char _des = des; // 这一步最重要，你要记住原来的位置，然后返回
  while (*src != '\0')
  {
    *des++ = *src++;
  }
  *des = '\0';
  return _des;
}
/*模拟实现库函数strlen*/
size_t _strlen(const char *p)
{
  size_t len = 0;
  while (*p != '\0')
  {
    len++;
    p++;
  }
  return len;
}
int main()
{
  // 函数原型：char * strcpy ( char * destination, const char * source );
  // 函数原型：size_t strlen ( const char * str );
  char arr[] = "hanxian";
  char des[8];
  _strcpy(des, arr);
  printf("%s\n", des);
  int ans = _strlen(arr);
  int ans2 = _strlen(des);
  printf("%d\n", ans);
  printf("%d\n", ans2);
  return 0;
}