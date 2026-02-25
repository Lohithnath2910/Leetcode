/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    // public List<Integer> k = new ArrayList<>();
    // public void m(TreeNode root)
    // {
    //     if(root != null)
    //     {
    //         m(root.left);
    //         k.add(root.val);
    //         m(root.right);
    //     }
    // }

    // public boolean isValidBST(TreeNode root) 
    // {
    //     m(root);
    //     for(int i = 1;i < k.size();i++)
    //     {
    //         if(k.get(i-1) >= k.get(i))
    //         {
    //             return false;
    //         }
    //     }

    //     return true;
    // }
    public long mi = Long.MIN_VALUE;
    public boolean isValidBST(TreeNode root)
    {
        if(root == null) return true;

        if(!isValidBST(root.left)) return false;
        if(mi >= root.val) return false;
        mi = root.val;
        if(!isValidBST(root.right)) return false;
        return true;
    }
}