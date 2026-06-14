class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int l = 0;
        int h = 0;
        int c = -9999;
        while(l < nums.length && h < nums.length)
        {
            if(nums[l] == nums[h] && nums[h] == 1)
            {
                h++;
            }
            else if(nums[h] == 0)
            {
                c = Math.max(h-l,c);
                h++;
                l = h;
            }
        }

        return Math.max(h-l,c);
    }
}