#include <stdio.h>
#include <ctype.h>
// C语言转大小写;
void toLowerCase(char *str)
{
  while (*str)
  {
    if (isupper(*str))
    {
      *str = tolower(*str);
    }
    str++;
  }
}

int main()
{
  char input[100];
  printf("Enter a string: ");
  scanf("%s", input);

  toLowerCase(input);
  printf("Converted to lowercase: %s\n", input);

  return 0;
}
