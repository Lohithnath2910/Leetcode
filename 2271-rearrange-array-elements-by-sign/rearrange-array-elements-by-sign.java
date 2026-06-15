class Solution {
    public int[] rearrangeArray(int[] nums) {
        int l = 0;
        int h = 1;
        int[] r = new int[nums.length];

        for(int i = 0;i < nums.length;i++)
        {
            if(nums[i] > 0)
            {
                r[l] = nums[i];
                l+=2;                
            }
            else
            {
                r[h] = nums[i];
                h+=2;
            }
        }
        return r;
    }
}