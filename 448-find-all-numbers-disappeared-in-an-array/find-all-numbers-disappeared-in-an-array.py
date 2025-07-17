class Solution(object):
    def findDisappearedNumbers(self, nums):
        for i in nums:
            k = abs(i) - 1
            nums[k] = -abs(nums[k])
        return [i + 1 for i in range(len(nums)) if nums[i] > 0]