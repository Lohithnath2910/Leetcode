class Solution {
    public int maxProduct(int[] nums) {
        int m1 = nums[0];
        int m2 = nums[0];
        int ans = m1;
        for(int i = 1;i < nums.length;i++)
        {
            int x = nums[i];
            int t = m1;
            m1 = Math.max(x,Math.max(m1*x,m2*x));
            m2 = Math.min(x,Math.min(t*x,m2*x));
            ans = Math.max(ans,m1);
        }
        return ans;
    }
}