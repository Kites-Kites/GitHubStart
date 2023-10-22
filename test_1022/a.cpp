// #include <iostream>
// #include <vector>
// using namespace std;
// // Niu_ke_汽水瓶
// int foo(int n)
// {
//   if (n <= 1)
//   {
//     return 0;
//   }
//   else if (n <= 3)
//   {
//     return 1;
//   }
//   else
//   {
//     int new_bottles = n / 3;
//     int remaing_bottles = n % 3;
//     return new_bottles + foo(new_bottles + remaing_bottles); // not return foo(new_bottles+remaing_bottles);
//     // 因为new_bottled就是你已经经手了老板娘换来的，只不过你要再转手给老板娘换出去，至于可以借一个瓶子，我们在下端代码中有体现;上面这个也可以运行的原因是n==2的时候其实已经不借的话就喝不了了，但是应为题目要求了，所以我们在if(n==2)的时候，依然return 1了，所以下述代码万全是冗余;
//   }
// }
// int main()
// {
//   int n;
//   vector<int> v;
//   while (true)
//   {
//     cin >> n;
//     if (n == 0)
//     {
//       for (int e : v)
//       {
//         cout << e << endl;
//       }
//       break;
//     }
//     int result = foo(n);
//     v.push_back(result);
//   }
//   return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int foo(int n)
{
  if (n <= 1)
  {
    return 0;
  }
  else if (n == 2)
  {
    return 1;
  }
  else
  {
    int new_bottles = n / 3;
    int remaining_bottles = n % 3;
    int borrowed_bottle = (remaining_bottles == 2) ? 1 : 0;
    return new_bottles + borrowed_bottle + foo(new_bottles + remaining_bottles);
  }
}

int main()
{
  int n;
  vector<int> v;
  while (true)
  {
    cin >> n;
    if (n == 0)
    {
      for (int e : v)
      {
        cout << e << endl;
      }
      break;
    }
    int result = foo(n);
    v.push_back(result);
  }
}
