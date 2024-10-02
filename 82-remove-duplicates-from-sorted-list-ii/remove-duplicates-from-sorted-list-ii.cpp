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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* alt = new ListNode(-1);
        alt->next = head;
        ListNode* temp = alt;
        while(temp->next && temp->next->next != NULL)
        {
            if(temp->next->val == temp->next->next->val)
            {
                int dup = temp->next->val;
                while(temp->next != NULL && temp->next->val == dup)
                {
                    temp->next = temp->next->next;
                }
            }
            else
            {    
                temp = temp->next;
            }
        }
        return alt->next;    
    }
};