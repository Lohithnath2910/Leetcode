class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        i = 0
        j = 0
        d = {}
        m = float("-inf")
        n = len(nums)
        while(i < n and j < n):
            if nums[j] not in d:
                d[nums[j]] = 1
                j += 1
            elif d[nums[j]] < k:
                d[nums[j]] += 1
                j += 1
            else:
                d[nums[i]] -= 1
                i += 1
            m = max(m,j-i)
        return m