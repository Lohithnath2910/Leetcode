class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        p = [1]*len(nums)
        p[0] = nums[0]
        s = [1]*len(nums)
        s[len(nums)-1] = nums[len(nums)-1]
        l = []
        i = 1
        j = len(nums)-2
        while(i < len(nums) and j >= 0):
            p[i] = nums[i]*p[i-1]
            i += 1
            s[j] = nums[j]*s[j+1]
            j -= 1

        for i in range(len(nums)):
            if i == 0:
                l.append(s[i+1])
            elif i == len(nums)-1: 
                l.append(p[i-1])
            else:
                l.append(p[i-1]*s[i+1])
        return l