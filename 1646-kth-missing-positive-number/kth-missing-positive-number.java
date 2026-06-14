class Solution {
    public int findKthPositive(int[] arr, int k) {
        int l = 0, h = arr.length -1;
        while(l <= h)
        {
            int m = (l+h)/2;
            int c = m + 1;
            int f = arr[m] - c;
            if(f >= k) h = m-1;
            else if(f < k) l = m + 1;
        }
        return l + k;
    }
}