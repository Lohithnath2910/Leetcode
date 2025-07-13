class Solution(object):
    def isIsomorphic(self, s, t):
        if len(s) != len(t):
            return False
        
        imissher1 = {}
        imissher2 = {}

        for i in range(len(s)):
            her1 = s[i]
            her2 = t[i]

            if her1 in imissher1:
                if imissher1[her1] != her2:
                    return False
            else:
                imissher1[her1] = her2
            
            if her2 in imissher2:
                if imissher2[her2] != her1:
                    return False
            else:
                imissher2[her2] = her1
        return True 
        