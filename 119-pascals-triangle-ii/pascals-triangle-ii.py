class Solution(object):
    def getRow(self, rowIndex):
        main = [[1],[1,1]]
        if(rowIndex == 0):
            return [1]
        
        elif(rowIndex == 1):
            return [1,1]

        for i in range(1, rowIndex+1):
            temp = [1]
            for j in range(1,len(main[-1])):
                temp.append(main[-1][j-1]+main[-1][j])
            temp.append(1)
            main.append(temp)
        return main[-2]

        