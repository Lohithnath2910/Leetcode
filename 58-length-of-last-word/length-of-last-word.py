class Solution(object):
    def lengthOfLastWord(self, s):
        s.strip()
        s = list(s)
        count = 0
        char = 0
        if(len(s) == 1 or len(s) == 2):
            return 1
        else:
            for i in range(len(s)-1, -1, -1):
                if(char == 0 and s[i] == ' '):
                    continue
                elif(s[i] != ' '):
                    char += 1
                    count += 1
                else:
                    break
            return count

        