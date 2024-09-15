#include <iostream>
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

int main()
{
  int n;
  std::cout << "Enter the range: ";
  std::cin >> n;

  std::vector<int> primes = sieveOfEratosthenes(n);

  std::cout << "Prime numbers up to " << n << " are:\n";
  for (int prime : primes)
  {
    std::cout << prime << " ";
  }
  std::cout << std::endl;

  return 0;
}
