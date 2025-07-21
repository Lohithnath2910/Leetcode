class Solution(object):
    def isMonotonic(self, nums):
        count1 = 0
        count2 = 0
        for i in range(1,len(nums)):
            if(nums[i-1] < nums[i]):
                count1 += 1
            elif(nums[i-1] > nums[i]):
                count2 += 1
            elif(nums[i-1] == nums[i]):
                continue
        
        if(count1 == 0 or count2 == 0):
            return True
        return False