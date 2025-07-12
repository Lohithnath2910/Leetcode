class Solution(object):
    def groupAnagrams(self, strs):
        temp = []
        for i in strs:
            temp.append("".join(sorted(i)))


        res = []
        book = [False] * len(strs)

        for i in range(len(temp)):
            if not book[i]:
                gr = [strs[i]]
                book[i] = True
                for j in range(i+1,len(temp)):
                    if temp[i] == temp[j] and not book[j]:
                        gr.append(strs[j])
                        book[j] = True
                res.append(gr)
        return res
                
            






        