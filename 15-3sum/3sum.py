class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        lis = []
        nums = sorted(nums)

        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            f = i
            r = i+1
            l = len(nums)-1
            while(r < l):
                su = nums[f] + nums[r] + nums[l]
                lo = []
                if su == 0:
                    lo.append(nums[f])
                    lo.append(nums[r])
                    lo.append(nums[l])
                    lis.append(lo)
                    r += 1
                    l -= 1
                    
                    while(r < l and nums[r] == nums[r-1]):
                        r += 1

                    while(r < l and nums[l] == nums[l+1]):
                        l -= 1                    

                elif su > 0:
                    l -= 1

                else:
                    r += 1

                    

        return lis

