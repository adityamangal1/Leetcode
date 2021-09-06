struct node *reverse(struct node *a)
{
    struct node *cur = a;
    struct node *prev = NULL;
    struct node *next;

    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    head = prev;
    return head;
}