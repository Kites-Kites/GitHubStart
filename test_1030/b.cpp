#include <iostream>
#include <vector>
#include <string>
#include <cstdint>

class task // contain information of process
{
public:
  uint32_t pid;     // pid
  pde_t *pgd;       // 存储页目录表的地址
  tstate state;     // 一个枚举类型，保存进程的状态，阻塞，挂起...
  uint32_t *kstack; // 进程的内核栈
  context *ctx;     // when the context switch in scheduler is occured（上下文切换时）, current task saves its registers to *ctx in class task, and new set of registers（新的寄存器组） are loaded from next task:

  trapframe *tf;                    // 中断或者异常时trapframe会保存中断号等
  task() {}                         // task的初始化
  void init_vm();                   // 初始化虚拟内存
  int load_binary(char binary_obj); // 接受一个二进制文件，返回一个整数作为状态码，这个函数会打开文件，解析二进制文件，并将程序加载到进程的虚拟地址空间中
};
struct trapframe // 当用户态切换到内核态时，trapframe会保存一些寄存器的信息
{
  uint32_t sp_usr;    // user mode用户模式下的stack pointer堆栈指针
  uint32_t lr_usr;    // 存储链接寄存器link register的值，保存有函数调用返回的地址
  uint32_t sp_svc;    // 存储supervisor mode内核模式下的堆栈指针
  uint32_t lr_svc;    // 存储内核态的link register
  uint32_t spsr;      // program status register
  uint32_t r[length]; // 存储通用寄存器的值
  uint32_t pc;        // pc包含了下一条指令的地址
};