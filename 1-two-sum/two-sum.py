class Solution(object):
    def twoSum(self, nums, target):
        # for i in range(len(nums)):
        #     for j in range(i+1,len(nums)):
        #         if(target == (nums[i] + nums[j])):
        #            return [i,j]
        # return []

        temp1 = {}

        for i,j in enumerate(nums):
            temp = target - j
            if temp in temp1:
                return [temp1[temp],i]
            temp1[j] = i
        return []

            