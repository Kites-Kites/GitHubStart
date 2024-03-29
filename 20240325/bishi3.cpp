// code from me,error!

// #include<iostream>
// #include<vector>
// int main()
// {
//     int n;
//     while(std::cin>>n)
//     {
//         std::vector<int> vec(n,0);
//         for(int i=0;i<n;i++)
//         {
//             std::cin>>vec[i];
//         }
//         int ans=0,result=0;
//         for(int i=1;i<n;i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 // while(i<vec.size())
//                 // {
//                 //     while(vec[++i]>vec[++j])
//                 //     ans++;
//                 //     ++i;
//                 // }

//                 if(vec[i]>vec[j])
//                 ans++;

//             }
//             result=std::max(ans,result);

//         }
//         std::cout<<result<<std::endl;

//     }
// }
// code from ChatGPT ,correct;
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n;
  while (std::cin >> n)
  {
    std::vector<int> vec(n, 0);
    for (int i = 0; i < n; i++)
    {
      std::cin >> vec[i];
    }
    std::vector<int> dp(n, 1); // dp[i] 表示以 vec[i] 结尾的最长上升子序列的长度
    int result = 1;            // 最小长度为1，即单个元素本身也是上升子序列
    for (int i = 1; i < n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        if (vec[i] > vec[j])
        {
          dp[i] = std::max(dp[i], dp[j] + 1);
        }
      }
      result = std::max(result, dp[i]); // 更新最长子序列长度
    }
    std::cout << result << std::endl;
  }
  return 0;
}
