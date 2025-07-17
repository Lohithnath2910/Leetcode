class Solution(object):
    def findMissingAndRepeatedValues(self, grid):
        k = len(grid)**2
        lol = [0] * (k+1)
        for i in range(len(grid)):
            for j in range(len(grid)):
                lol[grid[i][j]] += 1
        
        a = 0
        b = 0
        print(lol) 

        for i in range(1,k+1):
            if(lol[i] == 2):
                a = i
            elif(lol[i] == 0):
                b = i
        
        return [a,b]