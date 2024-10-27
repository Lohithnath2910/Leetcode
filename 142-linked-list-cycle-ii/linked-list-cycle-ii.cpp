/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        ListNode* one = head;    
        ListNode* two = head;
        while(two && two->next)
        {
            one = one->next;
            two = two->next->next;
            if(one == two)
            {
                one = head;
                while(one!=two)
                {
                    one= one->next;
                    two= two->next;
                }
                return one;
            }
        }    
        return NULL;
    }
};