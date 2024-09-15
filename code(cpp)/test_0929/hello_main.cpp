////#include<iostream>
////#include<string>
////
////using namespace std;
////int global = 78;
//
////int main()
////{
////	string line;
////	// 不要使用cin>>line,因为会它遇到空格就结束了
////
////	// while(cin>>line)
////
////	while (getline(cin, line))
////	{
////		size_t pos = line.rfind(' ');
////		cout << line.size() - pos - 1 << endl;
////	}
////
////	int global = 2020;//局部变量
////
////	//printf("global = %d\n", global);
////	int sum1 = 0;
////	int sum2 = 0;
////	scanf("%d %d", &sum1, &sum2);
////	int sum = sum1 + sum2;
////	printf("sum = %d\n", sum);
////
////
////
////	//char ch = 'w';
////	//printf("%c\n", ch);
////	return 0;
////}
//
////int main()
////{
//	//int n = 9;
//	//float *pFloat = (float *)&n;
//	//printf("n的值为：%d\n", n);
//	//printf("*pFloat的值为：%f\n", *pFloat);
//	//*pFloat = 9.0;
//	//printf("num的值为：%d\n", n);
//	//printf("*pFloat的值为：%f\n", *pFloat);
//	//return 0;
//
//
//
//	//char str1[] = "hello bit.";
//	//char str2[] = "hello bit.";
//	//const char *str3 = "hello bit.";
//	//const char *str4 = "hello bit.";
//	//if (str1 == str2)
//	//	printf("str1 and str2 are same\n");
//	//else
//
//	//	printf("str1 and str2 are not same\n");
//
//	//if (str3 == str4)
//	//	printf("str3 and str4 are same\n");
//	//else
//
//	//	printf("str3 and str4 are not same\n");
//
//	//int arr[10] = { 0 };
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr);
//
////}
//
//
//
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//			printf("\n");
//	}
//}
//
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////int main()
////{
////	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
////	print_arr1(arr, 3, 5);
////	//数组名arr，表示首元素的地址
////
////	//但是二维数组的首元素是二维数组的第一行
////
////	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
////
////	//可以数组指针来接收
////
////	print_arr2(arr, 3, 5);
////	return 0;
////}
//
//
////void test()
////{
////	printf("hehe\n");
////}
////
////int main()
////{
////	printf("%p\n", test);
////	printf("%p\n", &test);
////	return 0;
////}
////struct
////
////{
////	int a;
////	char b;
////	float c;
////}x;
////
////struct
////
////{
////	int a;
////	char b;
////	float c;
////}a[20], *p;
////int main() {
////	p = &x;
////}
//
//
////struct A
////
////{
////	int _a : 2;
////	int _b : 5;
////	int _c : 10;
////	int _d : 30;
////};
////int main()
////{
////	printf("%d\n", sizeof(struct A));
////}
//
//
//enum Color//颜色
//
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//
//};
//
//
//
//union Un2
//
//{
//	short c[7];
//	int i;
//};
////int main()
////{
//	//enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。
//	////联合变量的定义
//
//	//union Un un;
//
//	////计算连个变量的大小
//
//	//printf("%d\n", sizeof(un));
//
//
//	//union Un un;
//
//	//// 下面输出的结果是一样的吗？
//
//	//printf("%d\n", &(un.i));
//
//	//printf("%d\n", &(un.c));
//	//un.i = 0x11223344;
//
//	//un.c = 0x55;
//
//	//printf("%x\n", un.i);
//	//printf("%d\n", sizeof(union Un2));
//}