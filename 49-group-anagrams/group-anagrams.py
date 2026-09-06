class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        k = {}
        for i in strs:
            a = [0]*26
            for j in i:
                a[ord(j) - ord('a')] += 1
            a = "".join(str(a))
            
            if a not in k:
                k[a] = []
            
            k[a].append(i)
        
        lis = []

        for i in k:
            lis.append(k[i])
        return lis