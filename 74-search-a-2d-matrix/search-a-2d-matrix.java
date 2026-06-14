class Solution {
    public boolean searchMatrix(int[][] matrix, int target) 
    {
        int m = matrix.length;
        int n = matrix[0].length;
        int l = 0,h = m*n-1;

        while(l <= h)
        {
            int mid = (l+h)/2;
            int mr = mid/n,mc = mid%n;
            if (matrix[mr][mc] == target) return true;
            else if(matrix[mr][mc] > target) h = mid - 1;
            else  l = mid + 1;
        }
        return false;
    }
}