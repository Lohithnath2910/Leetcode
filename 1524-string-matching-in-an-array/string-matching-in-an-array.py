class Solution(object):
    def stringMatching(self, words):
        lis = []
        for i in range(len(words)):
            for j in range(len(words)):
                if i != j and words[j].find(words[i]) != -1:
                    lis.append(words[i])
                    break
        return lis
        
        