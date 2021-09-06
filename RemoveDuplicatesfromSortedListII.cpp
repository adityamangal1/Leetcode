#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        ListNode *dummy = new ListNode(0,head);
        ListNode *prev = dummy;

        while (head != NULL)
        {
            if (head->next != NULL && head->val == head->next->val)
            {
                //skip the nodes whose values are equal to head.
                while (head->next != NULL && head->val == head->next->val)
                {
                    head = head->next;
                }
                prev->next = head->next;
            }
            else
            {
                prev = prev->next;
            }
            head = head->next;
        }
        return dummy->next;
    }
};