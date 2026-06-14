class Solution {
    public int s(long n)
    {
        long l = 1;
        long h = n;
        while(l <= h)
        {
            long mid = l + (h-l)/2;
            if(mid == n/mid)
            {
                return (int)mid;
            }
            else if(mid < n/mid)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        return (int)h;
    }

    public int arrangeCoins(int n) {
        long m = (long)n;
        return (s(8*m+1) - 1)/2;
    }
}