class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        ro = [set() for _ in range(9)]
        co = [set() for _ in range(9)]
        bo = [set() for _ in range(9)]


        for i in range(9):
            for j in range(9):

                val = board[i][j]

                if val == ".":
                    continue
                
                b = (i//3) * 3 + (j // 3)

                if val in ro[i]:
                    return False
                elif val in co[j]:
                    return False
                elif val in bo[b]:
                    return False 
                
                ro[i].add(val)
                co[j].add(val)
                bo[b].add(val)

        return True