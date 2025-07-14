class Solution(object):
    def maxDifference(self, s):
        lis1 = list(s)
        lis2 = dict.fromkeys(lis1,0)
        for i in lis1:
            lis2[i] += 1
        max_odd = 0
        min_even = 999999
        for i in lis2:
            if(lis2[i] % 2 == 0):
                min_even = min(min_even,lis2[i])
            else:
                max_odd = max(max_odd,lis2[i])
        return max_odd - min_even
        