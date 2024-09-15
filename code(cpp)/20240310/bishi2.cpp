#include <iostream>
// 为啥在本地都是好的，但是过不了牛客；
#include <vector>
std::vector<int> sieveOfEratosthenes(int n)
{
  std::vector<bool> isPrime(n + 1, true); // 初始化所有数为素数
  std::vector<int> primes;                // 存储素数的容器

  for (int p = 2; p * p <= n; ++p)
  {
    if (isPrime[p])
    {
      for (int i = p * p; i <= n; i += p)
      {
        isPrime[i] = false; // 将 p 的倍数标记为合数
      }
    }
  }

  // 收集所有素数
  for (int p = 2; p <= n; ++p)
  {
    if (isPrime[p])
    {
      primes.push_back(p);
    }
  }

  return primes;
}
void test(int a, std::vector<int> &vec) // not understand!
{
  for (int i = 0; i < vec.size(); ++i)
  {
    if (a % vec[i] == 0)
    {
      std::cout << vec[i];
      if (a != vec[i])
      {
        std::cout << " * ";
        test(a / vec[i], vec);
      }
      return;
    }
  }
}
// Error!
/*void test(int a, std::vector<int> &vec)
{
  int i = 0;
  if (a != 1)
  {
    if (a % vec[i++] == 0)
    {
      std::cout << vec[i] << "*";
      return test(a / vec[i], vec);
    }
  }
}*/
int main()
{
  int a;
  std::vector<int> vec = sieveOfEratosthenes(10000);
  while (std::cin >> a)
  {
    std::cout << a << " = ";
    test(a, vec);
    std::cout << std::endl;
  }
  return 0;
}