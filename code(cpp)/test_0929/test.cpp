#include<iostream>
#include<string>

using namespace std; 
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//
//
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//
//
//int main()
//{
//	f(0);//f(int)
//	f(NULL);//f(int)
//	f((int*)NULL);//f(int*)
//	return 0;
//}

struct Bar
{
	static const int number = 90;

};
int main()
{
	cout << Bar::number<<endl;
	cout << &Bar::number << endl;

	cout << sizeof(nullptr) << endl;
	cout << sizeof(NULL) << endl;
	cout << sizeof((void *)0) << endl;
}