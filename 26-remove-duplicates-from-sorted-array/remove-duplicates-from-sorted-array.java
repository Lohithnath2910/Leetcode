class Solution {
    public int removeDuplicates(int[] nums) {
        int l = 0;
        int h = 0;
        while(l < nums.length && h < nums.length)
        {
            if(nums[l] == nums[h])
            {
                h++;
            }

            else if(nums[l] != nums[h])
            {
                l++;
                int temp = nums[h];
                nums[h] = nums[l];
                nums[l] = temp;
                h++;
            } 
        }
        return l+1;
    }
}