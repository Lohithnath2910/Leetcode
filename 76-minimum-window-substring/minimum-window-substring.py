class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if len(s) < len(t) or (s == "" or t == ""):
            return ""

        s1 = {}
        t1 = {}

        for i in t:
            if i in t1:
                t1[i] += 1        
            else:
                t1[i] = 1
        
        m = 0
        flag = 0
        l = 0
        r = 0   
        i = 0
        j = 0

        while(j < len(s)):
            if s[j] in s1:
                s1[s[j]] += 1
            else:
                s1[s[j]] = 1
            
            if (s[j] in t1 and s1[s[j]] == t1[s[j]]):
                flag += 1
            
            while(i <= j and flag == len(t1)):
                if m == 0 or m > j-i + 1:
                    m = j - i + 1
                    l = i
                    r = j
                s1[s[i]] -= 1

                if(s[i] in t1 and s1[s[i]] < t1[s[i]]):
                    flag -= 1
                
                i += 1
            
            j += 1
        if m == 0:
            return ""
            
        return s[l:r+1]
        
        

