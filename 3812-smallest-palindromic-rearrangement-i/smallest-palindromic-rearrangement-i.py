class Solution:
    def smallestPalindrome(self, s: str) -> str:

        def c(s1):
            return s1 == s1[::-1]
        

        def m():
            n = len(s)
            if n % 2 == 0:
                mid = n//2 - 1
                
                a = sorted(s[:mid+1])
                b = sorted(s[mid+1:], reverse=True)

                return "".join(a + b)
            else:
                mid1 = n // 2 - 1
                mid2 = n // 2 + 1
                mm = s[n // 2]

                a = sorted(s[:mid1+1])
                b = sorted(s[mid2:], reverse=True)

                return "".join(a) + mm + "".join(b)
        o = m()
        return o