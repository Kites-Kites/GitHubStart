// 悬挂引用
// 1.
int &foo()
{
  int x = 0;
  return x; // 返回局部变量 x 的引用，会导致悬挂引用
}
// 2.
int *ptr = new int(0);
delete ptr;
int &ref = *ptr; // ptr 指向已释放的内存，会导致悬挂引用
