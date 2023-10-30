#include <iostream>
#include <thread>
#include <chrono>
#include <csignal>

// 使用 volatile 标志来通知线程终止
volatile sig_atomic_t interrupted = 0;

// 信号处理函数，用于接收信号
void signalHandler(int signal)
{
  if (signal == SIGUSR1)
  {
    interrupted = 1;
  }
}

// snooze 函数，接受秒数作为参数
void snooze(int sec)
{
  std::cout << "Sleeping for " << sec << " seconds..." << std::endl;
  auto start = std::chrono::system_clock::now();

  for (int i = 0; i < sec; ++i)
  {
    if (interrupted)
    {
      std::cout << "Interrupted after " << i << " seconds." << std::endl;
      return;
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }

  auto end = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsedSeconds = end - start;
  std::cout << "Slept for " << elapsedSeconds.count() << " seconds." << std::endl;
}

int main()
{
  // 注册信号处理函数
  std::signal(SIGUSR1, signalHandler);

  snooze(10); // 休眠 10 秒

  return 0;
}
