#include <iostream>
#include <vector>
#include <typeinfo>
// 模板类：利用这个造出不同的类，以适应不同情况
template <class T>
class Pair
{
private:
  T first;
  T second;

public:
  Pair(const T &f, const T &s)
      : first(f), second(s) {}
  T getFirst() const { return first; }
  T getSecond() const { return second; }
};

int main()
{
  Pair<int> int_pair(15, 56);
  Pair<double> double_pair(3.14, 56.12);
  std::cout << int_pair.getFirst() << std::endl;
  std::cout << double_pair.getSecond() << std::endl;
  return 0;
}
