class Solution(object):
    def kthDistinct(self, arr, k):
        ilikeher = dict.fromkeys(arr,0)
        lol = 0
        for i in arr:
            ilikeher[i] += 1
        res = ""
        for i in arr:
            if(ilikeher[i] == 1):
                res = i
                lol += 1
            
            if(k == lol):
                return res
        return ""
        