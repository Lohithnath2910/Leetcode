class Solution(object):
    def isCircularSentence(self, sentence):
        f = False
        e = False
        strs = sentence.split(" ")
        if(strs[-1][-1] == strs[0][0]):
            e = True
            if(len(strs) == 1):
                return True
        for i in range(1,len(strs)):
            if strs[i-1][-1] != strs[i][0]:
                f = False
                break    
            else:
                f = True
        if(e and f):
            return True
        return False
        


        