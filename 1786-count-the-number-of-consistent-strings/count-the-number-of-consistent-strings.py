class Solution(object):
    def countConsistentStrings(self, allowed, words):
        k = {}
        count = 0
        for i in allowed:
            k[i] = 1

        for i in words:
            temp = 0
            for j in i:
                if(j not in k):
                    break
                temp += 1
            if(temp == len(i)):
                count += 1
        return count