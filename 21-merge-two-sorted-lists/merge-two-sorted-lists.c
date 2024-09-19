struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{
    struct ListNode head;
    struct ListNode* s = &head;
    if(list1 == NULL)
    {
        return list2;
    }
    else if(list2 == NULL)
    {
        return list1; 
    }

    while((list1 != NULL) && (list2 != NULL))
    {
        if(list1->val <= list2->val)
        {
            s->next = list1;
            list1 = list1->next;
        }
        else if(list1->val > list2->val)
        {
            s->next = list2;
            list2 = list2->next;
        }
        s = s->next;
    }

    if(list1 != NULL)
    {
        s->next = list1;
    }

    else if(list2 != NULL)
    {
        s->next = list2;
    }
    return head.next;
}