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
    bool hasCycle(ListNode *head) 
    {
        int temp = 99999;
        while(temp != 0)
        {
            if(head == NULL)
            {
                return false;
                break;
            }
            else
            {
                head = head->next;
                temp--;
            }
        }
        return true;
    }
};