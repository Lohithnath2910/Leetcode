class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        s11 = [0]*26
        s22 = [0]*26
        
        for i in range(len(s1)):
            s11[ord(s1[i]) - ord('a')] += 1
            s22[ord(s2[i]) - ord('a')] += 1
    
        i = 0
        j = len(s1)

        while(j < len(s2)):
            if s11 == s22:
                return True
            
            s22[ord(s2[i]) - ord('a')] -= 1
            s22[ord(s2[j]) - ord('a')] += 1
            i += 1
            j += 1
            
        return s11 == s22