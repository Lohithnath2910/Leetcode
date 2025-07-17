class NumArray(object):

    def __init__(self, nums):
        self.k = []
        for i in nums:
            self.k.append(i)


    def sumRange(self, left, right):
        return sum(self.k[left:right+1])

        
        


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)