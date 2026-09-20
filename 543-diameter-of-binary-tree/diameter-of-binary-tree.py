class Solution:
    m = 0
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        def d(r):
            if r is None:
                return 0
        
            l = d(r.left)
            r = d(r.right)
            self.m = max(self.m,l+r)
            return 1 + max(l,r)
        d(root)
        return self.m
        