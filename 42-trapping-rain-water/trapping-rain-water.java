class Solution {
    public int trap(int[] height) {
        int l = 0;
        int r = height.length;
        int lp = height[0];
        int rp = height[r-1];
        int water = 0;
        while(l < r)
        {
            if(lp < rp)
            {
                l++;
                lp = Math.max(lp, height[l]);
                water += lp - height[l];
            }
            else
            {
                r--;
                rp = Math.max(rp, height[r]);
                water += rp - height[r];
            }
        }
        return water;     
    }
}