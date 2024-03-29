#include <iostream>
#include <stack>
// Emacs计算器 牛客
// my code is error;
int main()
{
  int n;
  while (std::cin >> n)
  {
    std::stack<int> q;
    for (int i = 0; i < n; i++)
    {
      char val;
      std::cin >> val;
      if ((val - '0') >= 0 && (val - '0') <= 9)
      // if(val>='0'&&val<='9')
      {
        q.push(val);
      }
      else
      {
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        if (val == '*')
        {
          q.push(x * y);
        }
        if (val == '/')
        {
          q.push(y / x);
        }
        if (val == '+')
        {
          q.push(x + y);
        }
        else
        {
          q.push(y-x);
        }
      }
    }
    std::cout << q.top() << std::endl;
  }
}

// ChatGPT code is ERROR!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <stack>

int main()
{
  int n;
  while (std::cin >> n)
  {
    std::stack<int> q;
    for (int i = 0; i < n; i++)
    {
      char val;
      std::cin >> val;
      if (isdigit(val))
      {
        q.push(val - '0'); // 将字符转换为对应的数字
      }
      else
      {
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        if (val == '*')
        {
          q.push(x * y);
        }
        else if (val == '/')
        {
          q.push(y / x);
        }
        else if (val == '+')
        {
          q.push(x + y);
        }
        else if (val == '-')
        {
          q.push(y - x);
        }
      }
    }
    std::cout << q.top() << std::endl;
  }

  return 0;
}
//tomorow ,my code in the help of Acwing.
#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<stack>
int main()
{
  int n;
  std::stack<int> q;
  while(std::cin>>n)
  {
    for (int i = 0; i < n;i++)
    {
      std::string str;
      std::cin >> str;
      if(str[0]>='0'&&str[0]<='9')
      {
        int number = 0;
        for (int i = 0; i < str.size(); i++) // 之前错误的原因是有可能输入一个像这样的：123 90 *，此时用char ch;std::cin>>ch;就会出现只读入第一个1，23不会读入。我一直以为是有可能出现负数导致负号被错认为为减号！！！
        {
          number = number * 10 + str[i] - '0';
        }
        q.push(number);
      }
      else{
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        if(str[0]=='*')//or str=="*"//因为前者相当于一个字符，后者相当于一个字符串
        {
          q.push(x * y);
        }
        else if(str[0]=='/')
        {
          q.push(y / x);
        }
        else if(str[0]=='+')
        {
          q.push(x + y);
        }
        else if(str[0]=='-')
        {
          q.push(y - x);
        }
      }
    }
    std::cout << q.top() << std::endl;
    q.pop();
  }
}