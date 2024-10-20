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
    bool c(TreeNode* m,int c1)
    {
        if(m == NULL)
        {
            return true;
        }
        else if(m->val != c1)
        {
            return false;
        }
        return c(m->left,c1)&&c(m->right,c1);
    }
    bool isUnivalTree(TreeNode* root) 
    {
        if(root == NULL)
        {
            return true;
        }
        return c(root,root->val);
    }
};