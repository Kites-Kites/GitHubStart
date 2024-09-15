#include <iostream>
#include <string>

std::string add(const std::string &num1, const std::string &num2)
{
  std::string result;
  int carry = 0;
  int i = num1.size() - 1;
  int j = num2.size() - 1;

  while (i >= 0 || j >= 0 || carry > 0)
  {
    int digit1 = i >= 0 ? num1[i] - '0' : 0; // 刚开始是个位
    int digit2 = j >= 0 ? num2[j] - '0' : 0;

    int sum = digit1 + digit2 + carry; // carry是进位
    carry = sum / 10;
    sum %= 10;

    result.insert(result.begin(), sum + '0'); // 每次都在前边插入

    i--;
    j--;
  }

  return result;
}

int main()
{
  std::string str_a, str_b, str_c;
  while (std::cin >> str_a >> str_b >> str_c)
  {
    std::string sum_ab = add(str_a, str_b);
    std::string sum_ac = add(str_a, str_c);
    std::string sum_bc = add(str_b, str_c);

    if (sum_ab > str_c && sum_ac > str_b && sum_bc > str_a)
    {
      std::cout << "Yes" << std::endl;
    }
    else
    {
      std::cout << "No" << std::endl;
    }
  }
  return 0;
}
