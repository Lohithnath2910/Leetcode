class Solution {
    public int maxArea(int[] height) {
        int l = 0;
        int r = height.length-1;
        int water = -999;
        while(l < r)
        {
            int h = Math.min(height[l],height[r]);
            if(h*Math.abs(l-r) >= water)
            {
                water = h*Math.abs(l-r);
            }

            if(height[l] > height[r])
            {
                r--;
            }

            else
            {
                l++;
            }
        }
        return water;
    }
}