// no check!!!

// string s1 = "easy";
// string s2 = "medium";
// string s3 = "hard";
// string s4 = "nightmare";
// string s5 = "check-in";

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string calculateDifficulty(string sentence)
{
  transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower); // 将句子转换为小写，以便不区分大小写
  int easyCount = count(sentence.begin(), sentence.end(), "easy");
  int hardCount = count(sentence.begin(), sentence.end(), "hard");
  int checkInCount = count(sentence.begin(), sentence.end(), "check-in");

  if (easyCount > hardCount && easyCount > checkInCount)
  {
    return "Easy";
  }
  else if (hardCount > easyCount && hardCount > checkInCount)
  {
    return "Hard";
  }
  else
  {
    return "Moderate";
  }
}

int main()
{
  int n;
  cout << "请输入句子的数量：";
  cin >> n;
  cin.ignore(); // 清除输入缓冲

  for (int i = 0; i < n; ++i)
  {
    string sentence;
    cout << "请输入英语句子：" << endl;
    getline(cin, sentence);
    string difficulty = calculateDifficulty(sentence);
    cout << "句子 " << i + 1 << " 的难度是：" << difficulty << endl;
  }

  return 0;
}
