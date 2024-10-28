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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* oddt = NULL;
        ListNode* event = NULL;
        ListNode* temp = head;
        
        ListNode* odd = NULL;
        ListNode* even = NULL;
        int count = 1;
        while(temp != NULL)
        {
            if(count%2 == 0)
            {
                ListNode* newn = new ListNode(temp->val);
                if(event == NULL)
                {
                    event = newn;
                    even = newn;
                }
                else
                {
                    event->next = newn;
                    event=event->next;
                }
            }
            else
            {
                ListNode* newn1 = new ListNode(temp->val);
                if(oddt == NULL)
                {
                    oddt = newn1;
                    odd = newn1;
                }
                else
                {   
                    oddt->next = newn1;
                    oddt=oddt->next;
                }
            }
            temp = temp->next;
            count++;
        }

        ListNode* temp1 = odd;
        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = even;
        return odd;    
    }
};