////#include<iostream>
////#include<string>
////
////using namespace std;
////int global = 78;
//
////int main()
////{
////	string line;
////	// ��Ҫʹ��cin>>line,��Ϊ���������ո�ͽ�����
////
////	// while(cin>>line)
////
////	while (getline(cin, line))
////	{
////		size_t pos = line.rfind(' ');
////		cout << line.size() - pos - 1 << endl;
////	}
////
////	int global = 2020;//�ֲ�����
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
//	//printf("n��ֵΪ��%d\n", n);
//	//printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	//*pFloat = 9.0;
//	//printf("num��ֵΪ��%d\n", n);
//	//printf("*pFloat��ֵΪ��%f\n", *pFloat);
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
////	//������arr����ʾ��Ԫ�صĵ�ַ
////
////	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
////
////	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
////
////	//��������ָ��������
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
//enum Color//��ɫ
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
//	//enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣
//	////���ϱ����Ķ���
//
//	//union Un un;
//
//	////�������������Ĵ�С
//
//	//printf("%d\n", sizeof(un));
//
//
//	//union Un un;
//
//	//// ��������Ľ����һ������
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