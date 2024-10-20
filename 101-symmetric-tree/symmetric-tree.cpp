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
    bool k(TreeNode* r,TreeNode* l)
    {
        if(r == NULL && l == NULL)
        {
            return true;
        }
        else if(r == NULL || l == NULL)
        {
            return false;
        }
        return  r->val == l->val && k(r->left,l->right) && k(r->right,l->left);

    }
    bool isSymmetric(TreeNode* root) 
    {
        if(root == NULL)
        {
            return true;
        }
        return k(root->left,root->right);
    }
};