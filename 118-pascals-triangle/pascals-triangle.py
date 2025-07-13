class Solution(object):
    def generate(self, numRows):
        lis = []

        for i in range(numRows):
            curr = [1]

            if lis:
                prev = lis[-1]
                for i in range(1, len(prev)):
                    curr.append(prev[i-1] + prev[i])
                curr.append(1)
            lis.append(curr)

        return lis

        
        
        