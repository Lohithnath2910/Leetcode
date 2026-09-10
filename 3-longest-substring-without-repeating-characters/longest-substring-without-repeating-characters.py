class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        c = 0
        sa = set()
        i = 0
        j = 0
        while(j < len(s)):
            if s[j] not in sa:
                sa.add(s[j])
                j += 1
            
            elif s[j] in sa:
                c = max(c,j-i)
                sa.remove(s[i])
                i += 1
            
        return max(c,j-i)
