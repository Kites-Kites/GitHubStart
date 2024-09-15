#include<iostream>
#include<string>
// my error code;

// int main()
// {
//   int ans = 0;
//   std::string str;
//   while(std::cin>>str)
//   {
//     for (int i = 0; i < str.size();i++)
//     {
//       ans = ans * 10 + str[i] - '0';
//     }
//     std::cout << ans << std::endl;
//     str = "";
//   }
//   return 0;
// }



//->correct code in the help of ChatGPT.
int main()
{
  std::string str;
  while(std::cin>>str)
  {
    int ans = 0;
    for (int i = 0; i < str.size();i++)
    {
      ans = ans * 10 + str[i] - '0';
    }
    std::cout << ans << std::endl;
    // why not use str="" here?
  }
}