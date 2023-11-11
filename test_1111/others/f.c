#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdio.h>
int main()
{
  const char* str = "hello linux\n";


  write(1,str,strlen(str));
  
  return 0;
}
