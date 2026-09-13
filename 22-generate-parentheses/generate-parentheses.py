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
            self.ss(res,s+"(",o+1,c,ma)
        
        if c < o:
            self.ss(res,s+")",o,c+1,ma)
        
        