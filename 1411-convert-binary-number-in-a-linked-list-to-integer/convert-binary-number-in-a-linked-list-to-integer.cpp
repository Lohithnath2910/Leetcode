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
    int getDecimalValue(ListNode* head) 
    {
        vector<int> store;
        int dec = 0;
        int power = 0;
        while(head != NULL)
        {
            store.push_back(head->val);
            head = head->next;
        }
        int i = store.size()-1;
        while(power <= store.size() && i >= 0)
        {
            if(store[i] == 1)
            {
                dec += pow(2,power);
            }
            power++;
            i--;
        }
        return dec;
    }
};