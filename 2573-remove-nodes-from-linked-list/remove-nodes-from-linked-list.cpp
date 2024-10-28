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
    ListNode* removeNodes(ListNode* head) 
    {
        if(head == NULL)
        {
            return NULL;
        }
        ListNode* node = head;
        ListNode* nex = removeNodes(node->next);

        node->next = nex;
        if(nex == NULL || node->val >= nex->val)
        {
            return node;
        }
        return nex;
    }
};