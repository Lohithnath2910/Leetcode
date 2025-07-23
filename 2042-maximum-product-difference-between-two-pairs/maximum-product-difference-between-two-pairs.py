class Solution(object):
    def maxProductDifference(self, nums):
        k = sorted(nums)
        return (k[-1]*k[-2] - k[0]*k[1])

