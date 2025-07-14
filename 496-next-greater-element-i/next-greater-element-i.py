class Solution(object):
    def nextGreaterElement(self, nums1, nums2):

        lis = []

        for i in nums1:
            ind = nums2.index(i)
            temp = - 1
            for j in range(ind+1,len(nums2)):
                if(nums2[j] > i):
                    temp = nums2[j]
                    break
            lis.append(temp)
        return lis