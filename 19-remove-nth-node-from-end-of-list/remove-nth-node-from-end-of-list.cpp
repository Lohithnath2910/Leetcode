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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* temp = head;
        int l = 0;
        while(temp != NULL)
        {
            l++;
            temp = temp->next;
        }
        if(l == n)
        {
            return head->next;
        }
        temp = head;
        int tar = l - n - 1;
        while(tar > 0)
        {
            temp = temp->next;
            tar--;
        }
        temp->next = temp->next->next;
        return head;
    }
};