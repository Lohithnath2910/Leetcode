class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        self.ss(res,"",0,0,n)
        return res

    def ss(self, res, s, o, c, ma):
        if len(s) == ma*2:
            res.append(s)
            return
        
        if o < ma:
            s += "("
            self.ss(res,s,o+1,c,ma)
            s = s[:-1]
        
        if c < o:
            s += ")"
            self.ss(res,s,o,c+1,ma)
            s = s[:-1]

        