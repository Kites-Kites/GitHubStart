// 两数相加
// the code of me

class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    auto dummy = new ListNode(-1);
    ListNode *cur = dummy; // ListNode* is an address to point a ListNode. ListNode* there can use auto.
    int t = 0;
    while (l1 || l2 || t)
    {
      if (l1)
      {
        t += l1->val;
        l1 = l1->next;
      }
      if (l2)
      {
        t += l2->val;
        l2 = l2->next;
      }
      cur->next = new ListNode(t % 10);
      cur = cur->next;
      t /= 10;
    }
    return dummy->next;
  }
};