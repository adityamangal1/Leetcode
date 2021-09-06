#include <bits/stdc++.h>
using namespace std;
// #define NULL __null
class ListNode
{
public:
    int val;
    ListNode *next;
};

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *next;
    ListNode *current = head;
    ListNode *next_next;
    if (current == NULL)
    {
        return NULL;
    }
    while (current->next != NULL)
    {
        if (current->val == current->next->val)
        {
            next_next = current->next->next;
            current->next = next_next;
            free(current->next);
        }
        else
        {
            current = current->next;
        }
    }
    return head;
}
