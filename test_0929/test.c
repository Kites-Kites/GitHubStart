#include <stdio.h>
#include <string.h>

typedef unsigned int uint_32;
void test01()
{
  // static修饰局部变量
  static int i = 0;
  i++;
  printf("%d ", i);
}
void test02()
{
  int j = 0;

  j++;
  printf("%d ", j);
}
int main()
{
  // unsigned int o = 0;
  // uint_32 i = 0;
  // enum SEX
  // {
  //   MALE = 9,
  //   FEMALE,
  //   SECRET
  // };
  // printf("%d %d", MALE, FEMALE);
  // char arr2[] = {'h', 'e', 'l'};
  // char arr1[] = "hello";

  // printf("%s %s", arr2, arr1);

  // p[1] = 'k';
  // char arr[] = "hello";
  // gets(arr);
  // puts(arr);
  // printf("%c ", '\'');
  // printf("%s ", "\"");
  // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // for (int i = 0; i < 10; i++)
  //   printf("%d ", arr[i]);
  // for (int i = 0; i < 10; ++i)
  // {
  //   test01();
  // }
  // for (int j = 0; j < 10; ++j)
  // {
  //   test02();
  // }
  // int global = 0;

  // switch (global)
  // {
  // case 1:
  //   printf("%d", global);
  //   break;
  // case 2:
  //   printf("%d", global);
  //   break;
  // default:
  //   printf("%d", global);
  // }

  char a = 0xb6;
  short b = 0xb600;
  int c = 0xb6000000;
  if (a == 0xb6)
    printf("a");
  if (b == 0xb600)
    printf("b");
  if (c == 0xb6000000)
    printf("c");
  return 0;
}