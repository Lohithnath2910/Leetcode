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
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode* temp1 = head;
        ListNode* tempm = new ListNode;
        tempm->next = head;
        ListNode* temp2 = tempm;
        while((temp1 != NULL) && (temp1->next != NULL))
        {
            temp2 = temp2->next;
            temp1 = temp1->next->next;
        }
        temp2->next = temp2->next->next;
        return tempm -> next;
    }
};