class Solution(object):
    def pivotIndex(self, nums):
        n = len(nums)
        pre = [0]
        for i in range(n):
            pre.append(pre[i] + nums[i])
        
        for i in range(n):
            left = pre[i]
            right = pre[n] - pre[i+1]

            if(left == right):
                return i
        return -1

        