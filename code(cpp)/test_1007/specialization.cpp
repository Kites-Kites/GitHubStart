// have bug!!!
#include <iostream>
#include <vector>
#include <string>

class Person
{
public:
  Person(const std::string &name, int age) : name_(name), age_(age) {}
  std::string getName() const { return name_; }
  int getAge() const { return age_; }

private:
  std::string name_;
  int age_;
};

// 使用模板特化来适应自定义类型 Person
namespace std // error!!!should delete namespace std{}
{
  template <>
  class vector<Person>
  {
  public:
    // 添加自定义操作或特殊实现
    void customFunction()
    {
      std::cout << "Custom function for vector<Person>" << std::endl;
    }

    // 其他自定义操作...
  private:
    std::vector<Person> data_;
  };
}

int main()
{
  std::vector<Person> people;
  people.push_back(Person("Alice", 30));
  people.push_back(Person("Bob", 25));

  // 调用特化后的自定义函数
  people.customFunction();

  for (const auto &person : people)
  {
    std::cout << "Name: " << person.getName() << ", Age: " << person.getAge() << std::endl;
  }

  return 0;
}
