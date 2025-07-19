class Solution(object):
    def isArraySpecial(self, nums):
        if len(nums) == 1 or len(nums) == 0:
            return True
        par = [False]*(len(nums))
        for i in range(len(nums)):
            if(nums[i] % 2 == 0):
                par[i] = True
        for i in range(1,len(nums)):
            if(par[i-1] == par[i]):
                return False
        return True

        