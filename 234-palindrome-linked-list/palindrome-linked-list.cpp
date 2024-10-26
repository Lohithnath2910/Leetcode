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
    bool isPalindrome(ListNode* head) 
    {
        if(!head || !head->next)
        {
            return true;
        }
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        while(temp2 && temp2->next)
        {
            temp1 = temp1->next;
            temp2 = temp2->next->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = temp1;
        while(curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        ListNode* check1 = head;
        ListNode* check2 = prev;
        while(check2)
        {
            if(check1->val != check2->val)
            {
                return false;
                break;
            }
            check2 = check2 ->next;
            check1 = check1 ->next;
        }
        return true;
    }
};