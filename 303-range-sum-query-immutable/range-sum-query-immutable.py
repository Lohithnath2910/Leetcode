class NumArray(object):

    def __init__(self, nums):
        self.k = []
        temp = 0
        for i in nums:
            temp += i
            self.k.append(temp)


    def sumRange(self, left, right):
        if(left > 0 and right > 0):
            return self.k[right] - self.k[left-1]
        else:
            return self.k[left or right]

        
        


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)