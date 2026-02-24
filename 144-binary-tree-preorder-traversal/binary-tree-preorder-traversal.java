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
    List<Integer> ne = new ArrayList<>();
    public void preorder(TreeNode root,List<Integer> x)
    {
        if(root == null)
        {
            return;
        }

        x.add(root.val);
        preorder(root.left,ne);
        preorder(root.right,ne);

    }
    public List<Integer> preorderTraversal(TreeNode root) {
        preorder(root, ne);
        return ne;
    }
}