// C++中，为了让某个类只能由new来创建，应该怎么做
// 为啥偏偏要用new呢
// 使用 new 来动态分配对象的主要原因是:控制对象的生命周期(delete)和内存管理(在堆内存(heap)中创建对象)。
#include <iostream>
using namespace std;
class myClass
{
private:
  myClass() {}

public:
  static myClass *createObj()
  {
    return new myClass();
  }
  // else
};