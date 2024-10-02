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
        ListNode* temp = head;
        int check = 0;
        while(temp && temp->next != NULL)
        {
            check = (temp->next)->val;
            if(check == temp->val)
            {
                temp->next = temp->next->next;
                continue;
            }
            temp = temp->next;
        }
        return head;    
    }
};