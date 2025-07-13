class Solution(object):
    def numUniqueEmails(self, emails):
        temp1 = []
        for i in emails:
            name,dom = i.split('@')
            temp = ""
            for j in name:
                if j == ".":
                    continue
                elif j == "+":
                    break
                else:
                    temp += j
            lol = temp+"@"+dom
            if (lol not in temp1):
                temp1.append(lol)
        return len(temp1)
        