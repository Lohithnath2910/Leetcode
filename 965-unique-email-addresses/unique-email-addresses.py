class Solution(object):
    def numUniqueEmails(self, emails):
        temp1 = set()
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
            temp1.add(lol)
        return len(temp1)
        