#include "bankerAlgorithm.h"
// 用英文输入输出，vscode编码与终端编码不一致?寒假解决一下

void menu()
{
  std::cout << "Welcome to the Banker Algorithm!" << std::endl;
  std::cout << "input 1-----display" << std::endl;
  std::cout << "input 2-----request" << std::endl;
  std::cout << "input 3-----isSafe" << std::endl;
  std::cout << "input 4-----release" << std::endl;
  std::cout << std::endl;
}

int main()
{
  bankerAlgorithm bankerOne(4, 4);
  menu();

  while (true)
  {
    int n;
    std::cin >> n;
    switch (n)
    {
    case 1:
    {
      bankerOne.display();
      break;
    }
    case 2:
    {
      int result = bankerOne.request();
      if (result == 1)
      {
        std::cout << "request succeed!" << std::endl;
        bankerOne.display();
      }
      if (result == 4)
      {
        std::cout << "Invalid process ID or the process is done. Please enter a valid ID." << std::endl;
      }
      break;
    }
    case 3:
    {
      bool result = bankerOne.isSafe();
      if (result)
      {
        std::cout << "  and It is safe now!" << std::endl;
      }
      else
      {
        std::cout << "NOT safe" << std::endl;
        int n;
        std::cout << "input 1 is chexiao last request" << std::endl;
        std::cin >> n;
        if (n == 1)
        {
          bankerOne.chexiao();
        }
      }
      break;
    }
    case 4:
    {
      int release_result = bankerOne.release();
      if (release_result == 1)
      {
        std::cout << "release succeed!" << std::endl;
      }
      else if (release_result == 5)
      {
        std::cout << "process have not done" << std::endl; // 进程need矩阵不为零，你就想要释放资源
      }
      else
      {
        std::cout << "all released!" << std::endl;
      }
      break;
    }
    default:
      std::cout << "input number error!" << std::endl;
      std::cout << "enter again" << std::endl;
    }
  }
  return 0;
}