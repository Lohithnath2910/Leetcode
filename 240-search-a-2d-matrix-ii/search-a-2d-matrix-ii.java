class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m = matrix.length;
        int n = matrix[0].length;
        int i = 0, j = n-1;

        // if(m == 1)
        // {
        //     for(int f = 0;f < n;f++)
        //     {
        //         if(matrix[0][f] == target)
        //         {
        //             return true;
        //         }
        //     }
        //     return false;
        // }
        // else if(n == 1)
        // {
        //     for(int f = 0;f < m;f++)
        //     {
        //         if(matrix[f][0] == target)
        //         {
        //             return true;
        //         }
        //     }
        //     return false;
        // }

        while(i < m && j >= 0)
        {
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) 
            {
                j--;
            }
            else
            {
                i++;
            };
        }
    return false;
    }
}