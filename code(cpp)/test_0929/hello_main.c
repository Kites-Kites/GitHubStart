#include<stdio.h>



int global = 78;

int main()
{
	//string line;
	//// 不要使用cin>>line,因为会它遇到空格就结束了

	//// while(cin>>line)

	//while (getline(cin, line))
	//{
	//	size_t pos = line.rfind(' ');
	//	cout << line.size() - pos - 1 << endl;
	//}

	//int global = 2020;//局部变量

	//printf("global = %d\n", global);
	int sum1 = 0;
	int sum2 = 0;
	scanf("%d %d", &sum1, &sum2);
	int sum = sum1 + sum2;
	printf("sum = %d\n", sum);



	//char ch = 'w';
	//printf("%c\n", ch);
	return 0;
}