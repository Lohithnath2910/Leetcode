class Solution:
    def findMin(self, nums: List[int]) -> int:
        i = 0
        j = len(nums) - 1
        mi = nums[0]
        while(i <= j):
            if nums[i] < nums[j]:
                mi = min(nums[i],mi)

            m = (i + j) // 2
                
            mi = min(nums[m],mi)

            if nums[i] <= nums[m]:
                i = m + 1
                
            else:
                j = m - 1
            
        return mi