#ifndef BANKERALGORITHM_H
#define BANKERALGORITHM_H

#include <vector>
#include <iostream>

enum requestResult
{
  SUCCESS = 1,
  INSUFFICIENT_REQUSET,
  ALL_RELEASE,
  ERROR_PROCESS_ID,
  HAVE_NOT_DONE
};

class bankerAlgorithm
{
public:
  bankerAlgorithm(int numberOfProcesses, int numberOfSources);
  requestResult request();
  requestResult release();
  void display();
  bool isSafe();
  void chexiao();

private:
  int numProcesses;
  int numSources;
  std::vector<int> _request;

  std::vector<int> avaliable;
  std::vector<std::vector<int>> need;
  std::vector<std::vector<int>> allocation;
  std::vector<std::vector<int>> max;
  std::vector<bool> Finish;
  std::vector<int> work;
};

#endif