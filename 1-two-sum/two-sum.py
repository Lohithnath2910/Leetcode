class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i in range(len(nums)):
            co = target - nums[i]
            if co in d:
                return [d[co],i]
            d[nums[i]] = i
        return []