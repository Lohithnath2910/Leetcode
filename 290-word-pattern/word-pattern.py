class Solution(object):
    def wordPattern(self, pattern, s):
        dic = {}
        temp = s.split(' ')

        if (len(pattern) != len(temp) or len(set(pattern)) != len(set(temp))): 
            return False
        for i, j in enumerate(pattern):
            if j in dic:
                if dic[j] != temp[i]:
                    return False
            else:
                dic[j] = temp[i]
        return True

        