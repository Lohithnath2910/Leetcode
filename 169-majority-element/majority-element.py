class Solution(object):
    def majorityElement(self, nums):
        lis = dict.fromkeys(nums,0)

        for i in nums:
            lis[i] += 1
        
        for i in lis:
            if(lis[i] > len(nums)/2):
                return i
