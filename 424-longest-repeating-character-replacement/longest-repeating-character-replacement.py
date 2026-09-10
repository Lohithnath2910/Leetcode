class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        d = {}
        i = 0
        mf = 0
        ans = 0

        for j in range(len(s)):
            if s[j] in d:
                d[s[j]] += 1
            else:
                d[s[j]] = 1 
            mf = max(mf,d[s[j]]) 

            if (j - i + 1) - mf > k:
                d[s[i]] -= 1
                i += 1
            ans = max(ans,j-i+1)
        
        return ans