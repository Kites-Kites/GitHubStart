#include <iostream>
#include "a.h"
extern int global;
int main()
{
  std::cout << "hello Linux"
            << " " << global << std::endl;
  return 0;
}