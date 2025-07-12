class Solution(object):
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        
        pre = strs[0]
        for i in strs[1:]:
            count = 0 
            while(count < len(pre) and count < len(i) and pre[count] == i[count]):
                count += 1
            pre = pre[:count]
            if (pre == ""):
                break
        return pre







        