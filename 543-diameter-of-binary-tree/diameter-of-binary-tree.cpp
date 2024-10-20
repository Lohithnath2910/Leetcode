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
    int od(TreeNode* r,int& count)
    {
        if(r == NULL)
        {
            return 0;
        }

        int left = od(r->left,count);
        int right = od(r->right,count);

        count = max(count,left+right);
        return max(left,right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int count = 0;
        od(root,count);
        return count;
    }
};