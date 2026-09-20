# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: TreeNode | None) -> bool:
        def d(r):
            if r == None:
                return 0

            lh = d(r.left)
            rh = d(r.right)

            return 1 + max(lh,rh)
        
        if root == None:
            return True

        l = d(root.left)
        r = d(root.right)


        if abs(l-r) > 1:
            return False

        return self.isBalanced(root.left) and self.isBalanced(root.right) 
