class Solution(object):
    def appendCharacters(self, s, t):
        i = 0
        j = 0
        while(i < len(t) and j < len(s)):
            if(t[i] == s[j]):
                i += 1
            j += 1
        return len(t) - i
        