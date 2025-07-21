class Solution(object):
    def divideArray(self, nums):
        dic = dict.fromkeys(nums,0)
        for i in nums:
            dic[i] += 1
        print(dic)
        for i in dic:
            if(dic[i] % 2 != 0):
                return False
        return True
        