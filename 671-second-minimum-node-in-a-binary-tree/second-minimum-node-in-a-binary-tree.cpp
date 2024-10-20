/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void sol(TreeNode *r,set<int> &s)
    {
        if(r != NULL)
        {
            s.insert(r->val);
            sol(r->left,s);
            sol(r->right,s);
        }
    }
    int findSecondMinimumValue(TreeNode* root) 
    {
        set<int> s;
        sol(root,s);
        s.erase(s.begin());
        if(!s.empty())
        {
            return *(s.begin());
        }    
        return -1;
    }
};