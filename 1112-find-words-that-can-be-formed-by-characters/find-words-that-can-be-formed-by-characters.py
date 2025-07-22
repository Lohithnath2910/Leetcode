class Solution(object):
    def countCharacters(self, words, chars):
        count = 0
        f = [0]*26
        for i in chars:
            f[ord(i) - ord('a')] += 1

        
        for i in words:
            
            if(self.func(i,f)):
                count += len(i)
        

        return count

    def func(self,i,f):
        k = [0]*26
        for ch in i:
            l = ord(ch) - ord('a')
            k[l] += 1
            if(k[l] > f[l]):
                return False
        return True