#include<stdio.h>
#include <string.h>
int main()
{
  char arr[] = {'b', 'i', 't'};
  printf("%d\n", strlen(arr));
  return 0;
}

// strlen是用来获取字符串的有效长度的;
// strlen获取的规则非常简单：从前往后依次检测，直到遇到'\0'是就终止检测;
//字符串是以'\0'结尾的，因此这个arr[]只是一个字符数组，不算字符串，