/* reverse_string(char * string)（递归实现）*/
//不是逆序打印，而是直接从内容上改变
#include<stdio.h>
#include<stdlib.h>
#include<string.h>//为什么#include<cstring>就报错？
void reverse_string(char* p,int l,int r)
{
  if(l>=r)
    return;
  char temp = p[l];
  p[l] = p[r];
  p[r] = temp;
  reverse_string(p, l+1, r-1);
  // caution! not ----------
  //                       |
  //                       |
  //                       |
  //                       V
  //  reverse_string(p, l++, r--);
  //他的意思是先用这个当前的值，下次再加，结果永远没有下次了！
}
int main()
{
  char arr[] = "hello world!";
  int length = strlen(arr);
  printf("%s\n", arr);
  reverse_string(arr,0,length-1);
  printf("%s\n", arr);
  return 0;
}