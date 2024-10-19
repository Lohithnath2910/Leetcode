/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode** temp = &head,*f,*s;
        while((f = *temp) && (s = f->next))
        {
            f->next = s->next;
            s->next = f;
            *temp = s;
            temp = &(f->next);
        }
        return head;
    }
};