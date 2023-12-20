#include "bankerAlgorithm.h"

bankerAlgorithm::bankerAlgorithm(int numberOfProcesses, int numberOfSources)
    : numProcesses(numberOfProcesses),
      numSources(numberOfSources),
      avaliable(numberOfSources, 0),

      need(numberOfProcesses, std::vector<int>(numberOfSources, 0)),
      allocation(numberOfProcesses, std::vector<int>(numberOfSources, 0)),
      max(numberOfProcesses, std::vector<int>(numberOfSources, 0)),
      Finish(numProcesses, false),
      work(numberOfSources, 0)

{

  max[0][0] = 0;
  max[0][1] = 0;
  max[0][2] = 1;
  max[0][3] = 2;
  max[1][0] = 1;
  max[1][1] = 7;
  max[1][2] = 5;
  max[1][3] = 0;
  max[2][0] = 2;
  max[2][1] = 3;
  max[2][2] = 5;
  max[2][3] = 6;
  max[3][0] = 0;
  max[3][1] = 6;
  max[3][2] = 5;
  max[3][3] = 6;

  need[0][0] = 0;
  need[0][1] = 0;
  need[0][2] = 0;
  need[0][3] = 0;
  need[1][0] = 0;
  need[1][1] = 7;
  need[1][2] = 5;
  need[1][3] = 0;
  need[2][0] = 1;
  need[2][1] = 0;
  need[2][2] = 0;
  need[2][3] = 2;
  need[3][0] = 0;
  need[3][1] = 6;
  need[3][2] = 4;
  need[3][3] = 2;

  allocation[0][0] = 0;
  allocation[0][1] = 0;
  allocation[0][2] = 1;
  allocation[0][3] = 2;
  allocation[1][0] = 1;
  allocation[1][1] = 0;
  allocation[1][2] = 0;
  allocation[1][3] = 0;
  allocation[2][0] = 1;
  allocation[2][1] = 3;
  allocation[2][2] = 5;
  allocation[2][3] = 4;
  allocation[3][0] = 0;
  allocation[3][1] = 0;
  allocation[3][2] = 1;
  allocation[3][3] = 4;

  avaliable[0] = 1;
  avaliable[1] = 5;
  avaliable[2] = 2;
  avaliable[3] = 0;

  // for (int i = 0; i < numProcesses; i++)
  // {
  //   std::cout << "Please enter the " << i + 1 << " row elements of the max matrix" << std::endl; // 请输入max矩阵第i+1行的元素
  //   for (int j = 0; j < numSources; j++)
  //   {
  //     int val;
  //     std::cin >> val;
  //     max[i][j] = val; // not max[i].push_back(val);
  //   }
  // }
  // std::cout << std::endl;
  std::cout << "The max matrix you input is as follows" << std::endl; // 你输入的max矩阵如下
  for (int i = 0; i < numProcesses; i++)
  {
    for (int j = 0; j < numSources; j++)
    {
      std::cout << max[i][j] << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;

  // // 初始化allocation matrix
  // for (int i = 0; i < numProcesses; i++)
  // {
  //   std::cout << "Please enter the " << i + 1 << " row elements of allocation matrix" << std::endl; // 请输入allocation矩阵第i+1行的元素
  //   for (int j = 0; j < numSources; j++)
  //   {
  //     int val;
  //     std::cin >> val;
  //     allocation[i][j] = val;
  //   }
  // }
  // std::cout << std::endl;

  std::cout << "The allocation matrix you input is as follows" << std::endl; // 你输入的allocation矩阵如下
  for (int i = 0; i < numProcesses; i++)
  {
    for (int j = 0; j < numSources; j++)
    {
      std::cout << allocation[i][j] << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;

  // // 初始化need matrix
  // for (int i = 0; i < numProcesses; i++)
  // {
  //   std::cout << "Please enter the " << i + 1 << " row elements of need matrix" << std::endl; // 请输入need矩阵第i+1行的元素
  //   for (int j = 0; j < numSources; j++)
  //   {
  //     int val;
  //     std::cin >> val;
  //     need[i][j] = val;
  //   }
  // }
  // std::cout << std::endl;

  std::cout << "The need matrix you input is as follows" << std::endl; // 你输入的need矩阵如下
  for (int i = 0; i < numProcesses; i++)
  {
    for (int j = 0; j < numSources; j++)
    {
      std::cout << need[i][j] << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;

  // // 初始化available
  // std::cout << "Please enter the number of available resources in the system" << std::endl;
  // for (int i = 0; i < numSources; i++)
  // {
  //   int val;
  //   std::cin >> val;
  //   avaliable[i] = val;
  // }
  // std::cout << std::endl;

  std::cout << "The number of the available resources as follows" << std::endl;
  for (int i = 0; i < numSources; i++)
  {
    std::cout << avaliable[i] << " ";
  }
  std::cout << std::endl
            << std::endl;
}

requestResult bankerAlgorithm::request()
{
  int processID;
  std::cout << "Please enter the process ID" << std::endl;
  std::cin >> processID;
  if (Finish[processID])
  {
    return ERROR_PROCESS_ID;
  }
  if (processID < 0 || processID >= numProcesses)
  {
    return ERROR_PROCESS_ID;
  }
  std::cout << "Enter requested sources:" << std::endl;
label2:
  _request.clear();

  for (int i = 0; i < numSources; i++)
  {
    int val;
    std::cin >> val;

    _request.push_back(val);
  }

  for (int i = 0; i < numSources; i++)
  {
    if (_request[i] > need[processID][i])
    {
      std::cout << "The request is illegal and exceeds the number of need matrices." << std::endl;
      std::cout << "please enter again" << std::endl;

      goto label2;
    }
  }
  std::cout << "zheli" << std::endl;
  for (int i = 0; i < numSources; i++)
  {
    if (_request[i] > avaliable[i])
    {
      std::cout << "System resources are not satisfied now, please wait." << std::endl;
      return INSUFFICIENT_REQUSET; // 2
    }
  }
  // 试分配
  for (int i = processID, j = 0; j < numSources; j++)
  {
    allocation[i][j] += _request[j];
    need[i][j] -= _request[j];
    avaliable[j] -= _request[j];
  }

  return SUCCESS;
}

bool bankerAlgorithm::isSafe() // new_
{
  for (int i = 0; i < numSources; i++)
  {
    work[i] = avaliable[i];
  }
  std::vector<int> safetySequence;
  bool findsafetySequence = false;
  std::vector<bool> finish(numProcesses);
  for (int i = 0; i < numProcesses; i++)
  {
    finish[i] = Finish[i];
  }
  int max = numProcesses * numSources; // 引入最大迭代次数防止出现实际已经没有安全队列了却导致我们进入了循环
  while (!findsafetySequence && max > 0)
  {
    findsafetySequence = true;
    for (int i = 0; i < numProcesses; i++)
    {
      if (!finish[i])
      {
        findsafetySequence = false;
        break;
      }
    }
    if (findsafetySequence)
    {
      break;
    }

    for (int i = 0; i < numProcesses; i++)
    {
      for (int j = 0; j < numSources; j++)
      {
        if (need[i][j] > work[j])
        {
          findsafetySequence = false;
          break;
        }
        if (need[i][j] <= work[j] && finish[i] == false && j == numSources - 1)
        {
          finish[i] = true;
          safetySequence.push_back(i);
          for (int k = 0; k < numSources; k++)
          {
            // work[k] += (allocation[i][k] + need[i][k]);
            work[k] += allocation[i][k];
          }
        }
      }
    }
    max--;
  }
  if (max < 0)
  {
    return false;
  }
  std::cout << "safetySequence: ";
  for (auto e : safetySequence)
  {
    std::cout << e << " ";
  }
  return true;
}

void bankerAlgorithm::display()
{
  std::cout << "The various resource matrices of the system are as follows:" << '\n';

  std::cout << "Avaliable:" << '\n';
  for (int i = 0; i < numSources; i++)
  {
    std::cout << avaliable[i] << " ";
  }
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "----------max---------allo-----need---Finish" << std::endl;
  for (int i = 0; i < numProcesses; i++)
  {
    std::cout << "process" << i << "| ";
    for (int j = 0; j < numSources; j++)
    {
      std::cout << max[i][j] << " ";
    }
    std::cout << " ";
    for (int j = 0; j < numSources; j++)
    {
      std::cout << allocation[i][j] << " ";
    }
    std::cout << " ";
    for (int j = 0; j < numSources; j++)
    {
      std::cout << need[i][j] << " ";
    }
    std::cout << " ";
    if (Finish[i])
    {
      std::cout << "true" << std::endl;
    }
    else
    {
      std::cout << "false" << std::endl;
    }
  }
  std::cout << '\n';
  std::cout << "_request:"
            << " ";
  for (auto e : _request)
  {
    std::cout << e << " ";
  }
  std::cout << std::endl
            << "work: ";
  for (auto e : work)
  {
    std::cout << e << " ";
  }
  std::cout << std::endl;
}

requestResult bankerAlgorithm::release()
{
  std::vector<int> release;

label:
  release.clear();
  int processID;
  std::cout << "Please enter the process ID" << std::endl;
  std::cin >> processID;
  std::cout << "Enter released sources:" << std::endl;
  for (int i = 0; i < numSources; i++)
  {
    int val;
    std::cin >> val;
    release.push_back(val);
  }

  for (int j = 0; j < numSources; j++)
  {
    if (release[j] > allocation[processID][j])
    {
      std::cout << "release illegal" << std::endl;
      goto label;
    }
    for (int i = 0; i < numSources; i++)
    {
      if (need[processID][i])
      {
        return HAVE_NOT_DONE;
      }
    }
  }
  for (int j = 0; j < numSources; j++)
  {
    avaliable[j] += release[j];
  }

  Finish[processID] = true;
  for (auto e : Finish)
  {
    if (!e)
    {
      for (int i = 0; i < numSources; i++)
      {
        allocation[processID][i] = 0;
      }
      return SUCCESS; // val==1
    }
  }
  for (int i = 0; i < numSources; i++)
  {
    allocation[processID][i] = 0;
  }

  return ALL_RELEASE; // val==3
}

void bankerAlgorithm::chexiao()
{
  int i;
  std::cout << "input chexiao's process: " << std::endl;
  std::cin >> i;
  for (int j = 0; j < numSources; j++)
  {
    allocation[i][j] -= _request[j];
    need[i][j] += _request[j];
    avaliable[j] += _request[j];
  }
}
