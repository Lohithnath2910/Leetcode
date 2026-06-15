class Solution {
    public int majorityElement(int[] nums) {
        int e = 0;
        int c = 0;

        for(int i = 0;i < nums.length;i++)
        {

            if(nums[i] != e && c ==0)
            {
                e = nums[i];
                c = 1;
            }

            else if(nums[i] == e)
            {
                c++;
            }

            else
            {
                c--;
            }
        }
        return e;
    }
}