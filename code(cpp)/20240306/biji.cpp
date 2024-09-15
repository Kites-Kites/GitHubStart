// 翻转部分单向链表——牛客

#include <iostream>
using namespace std;

// 定义链表节点结构
struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

// 反转从第 L 个节点到第 R 个节点的部分
ListNode *reverseBetween(ListNode *head, int left, int right)
{
  // 定义虚拟头节点
  ListNode *dummy = new ListNode(0);
  dummy->next = head;
  ListNode *prev = dummy;

  // 移动 prev 到反转部分的前一个节点
  for (int i = 0; i < left - 1; ++i)
  {
    prev = prev->next;
  }

  // 反转部分的起点
  ListNode *start = prev->next;
  ListNode *then = start->next;

  // 逐个反转节点
  for (int i = 0; i < right - left; ++i)
  {
    start->next = then->next;
    then->next = prev->next;
    prev->next = then;
    then = start->next;
  }

  return dummy->next;
}

// 打印链表
void printList(ListNode *head)
{
  ListNode *curr = head;
  while (curr)
  {
    cout << curr->val << " ";
    curr = curr->next;
  }
  cout << endl;
}

int main()
{
  int length;
  while (cin >> length) // 根据数据建立链表
  {
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    while (length--)
    {
      int val;
      cin >> val;
      ListNode *node = new ListNode(val);
      if (!head) // 掌握人家这个if-else思想
      {
        head = tail = node;
      }
      else
      {
        tail->next = node;
        tail = tail->next;
      }
    }
    int left, right;
    cin >> left >> right;

    head = reverseBetween(head, left, right);
    printList(head);
  }

  return 0;
}
