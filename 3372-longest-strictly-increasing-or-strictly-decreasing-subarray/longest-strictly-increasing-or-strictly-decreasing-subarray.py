class Solution(object):
    def longestMonotonicSubarray(self, nums):
        inc = dec = maxer = 1
        for i in range(1,len(nums)):
            if (nums[i-1] < nums[i]):
                inc += 1
                dec = 1
            elif (nums[i] < nums[i-1]):
                dec += 1
                inc = 1
            else:
                inc = dec = 1
            maxer = max(maxer,inc,dec)
        return maxer