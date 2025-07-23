class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        f = dict.fromkeys(magazine,0)
        for i in magazine:
            f[i] += 1
        
        for i in ransomNote:
            if i in f and f[i] > 0:
                f[i] -= 1
            else:
                return False
        return True