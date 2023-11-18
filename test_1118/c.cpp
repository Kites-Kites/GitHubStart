/*
单例模式常用于需要全局访问点、配置管理、日志记录、数据库连接池等场景，以确保在整个应用程序中只有一个实例。但需要小心在多线程环境下使用，可能需要进行线程安全的处理。在现代C++中，可以使用更为复杂的实现方式，如C++11引入的线程安全的局部静态变量，来更安全地实现单例模式。
*/
/*
单例模式有饿汉模式和懒汉模式，饿汉模式：因为将该单例对象定义为static变量，程序启动即将其构造完成了。懒汉模式：存在线程安全的问题，解决方案是Double-Checked Locking Pattern (DCLP)。使用两次判断来解决线程安全问题并且提高效率。
*/
#include <iostream>
class Singleton
{
private:
  static Singleton *instance;

  Singleton()
  {
    std::cout << "Singleton instance created" << std::endl;
  }

public:
  static Singleton *getInstance()
  {
    if (!instance) // 非空才创建，有就不创建
    {
      instance = new Singleton();
    }
    return instance;
  }
  void showMessage()
  {
    std::cout << "hello from Singleton" << std::endl;
  }
};

Singleton *Singleton::instance = nullptr;

int main()
{
  Singleton *SingletonInstance1 = Singleton::getInstance();
  SingletonInstance1->showMessage();

  Singleton *SingletonInstance2 = Singleton::getInstance();
  SingletonInstance2->showMessage();

  std::cout << SingletonInstance1 << " " << SingletonInstance2 << std::endl;

  return 0;
}