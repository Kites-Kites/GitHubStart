#include <iostream>
#include <algorithm>
using namespace std;
/*链接：
扑克牌游戏大家应该都比较熟悉了，一副牌由54张组成，含3~A、2各4张，小王1张，大王1张。牌面从小到大用如下字符和字符串表示（其中，小写joker表示小王，大写JOKER表示大王）：
3 4 5 6 7 8 9 10 J Q K A 2 joker JOKER
输入两手牌，两手牌之间用"-"连接，每手牌的每张牌以空格分隔，"-"两边没有空格，如：4 4 4 4-joker JOKER。
请比较两手牌大小，输出较大的牌，如果不存在比较关系则输出ERROR。
基本规则：
（1）输入每手牌可能是个子、对子、顺子（连续5张）、三个、炸弹（四个）和对王中的一种，不存在其他情况，由输入保证两手牌都是合法的，顺子已经从小到大排列；
（2）除了炸弹和对王可以和所有牌比较之外，其他类型的牌只能跟相同类型的存在比较关系（如，对子跟对子比较，三个跟三个比较），不考虑拆牌情况（如：将对子拆分成个子）；
（3）大小规则跟大家平时了解的常见规则相同，个子、对子、三个比较牌面大小；顺子比较最小牌大小；炸弹大于前面所有的牌，炸弹之间比较牌面大小；对王是最大的牌；
（4）输入的两手牌不会出现相等的情况。*/

// 如何识别两个字符串各自的空格数
//
int main()
{
  string s;
  while (cin >> s)
  {
    int index = s.find('-');
    string str1 = s.substr(0, index);
    string str2 = s.substr(index + 1); // substr 函数的第一个参数表示要截取的子字符串的起始位置，第二个参数表示要截取的字符数。如果第二个参数被省略，那么截取将一直持续到字符串的末尾。

    // 一方有王
    if (str1 == "joker JOKER" || str2 == "joker JOKER")
    {
      cout << "joker JOKER" << endl;
    }

    int count1 = count(str1.begin(), str1.end(), ' ');
    int count2 = count(str2.begin(), str2.end(), ' ');

    // 一方有炸弹
    if (count1 == 4 && count2 != 4)
    {
      cout << str1 << endl;
    }
    if (count2 == 4 && count1 != 4)
    {
      cout << str2 << endl;
    }

    if (count1 == count2 || (count1 > 4 && count2 > 4)) // 手牌的类型相同（单对单，对对对，三对三，四对四，顺子对顺子);
    {
      if (str1[0] > str2[0])
      {
        cout << str1 << endl;
      }
    }
    else // 比不了的情况，eg:我是顺子，你是对子;
    {
      cout << "ERROR" << endl;
    }
  }
}