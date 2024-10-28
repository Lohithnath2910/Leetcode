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
    int gcd(int x,int y)
    {
        int res = min(x,y);
        while(res > 1)
        {
            if(x % res == 0 && y % res == 0)
            {
                break;
            }
            res--;
        }
        return res;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* temp = head;
        while(temp->next != NULL)
        {
            ListNode* l = new ListNode(gcd(temp->val,temp->next->val),temp->next);
            temp->next = l;
            temp=temp->next->next;
        }
        return head;
    }
};