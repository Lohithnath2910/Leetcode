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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* temp = head->next;
        ListNode* sol = temp;
        ListNode* solt = NULL;
        int sum = 0;
        while(temp != NULL)
        {
            if(temp->val != 0)
            {
                sum+=temp->val;
            }
            else if(temp->val == 0)
            {
                if(solt == NULL)
                {
                    ListNode* n = new ListNode(sum);
                    sum = 0;
                    solt = n;
                    sol = n;
                }
                else
                {
                    ListNode* n = new ListNode(sum);
                    sum = 0;
                    solt->next = n;
                    solt = solt->next;
                }
            }
            temp = temp->next;
        }
        return sol;
    }
};