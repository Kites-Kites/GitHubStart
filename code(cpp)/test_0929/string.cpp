	#include<string>
  #include<iostream>
  using namespace std;
  int main()
  {
    string line;
	//不要使用cin>>line,因为会它遇到空格就结束了

	//while(cin>>line)

	while (getline(cin, line))
	{
		size_t pos = line.rfind(' ');
		cout << line.size() - pos - 1 << endl;
	}
}