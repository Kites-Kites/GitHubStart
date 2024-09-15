#include <iostream>
#include <functional>
void print(const std::string &str, int num)
{
  std::cout << str << " " << num << std::endl;
}

int main()
{
  using Task = std::function<void()>;
  std::vector<Task> ara;
  ara.push_back(std::bind(print, "xi'an", 1));
  ara.push_back(std::bind(print, "beijing", 2));
  ara.push_back(std::bind(print, "shanghai", 3));
  for (auto &e : ara)
  {
    e();
  }
  return 0;
}

// c++11 std::bind()
//  常用于线程池