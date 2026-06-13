class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans = new int[2];
        int l = 0, h = nums.length-1;
        int idx = -1;

        while(l <= h)
        {
            int mid = (l + h)/2;

            if(nums[mid] == target)
            {
                idx = mid;
                h = mid - 1;
            }
            else if(nums[mid] > target)
            {
                h = mid-1;
            }
            else
            {
                 l = mid+1;   
            }
        }
        ans[0] = idx;
        l = 0;
        h = nums.length-1;
        idx = -1;

        while(l <= h)
        {
            int mid = (l + h)/2;

            if(nums[mid] == target)
            {
                idx = mid;
                l = mid + 1;
            }
            else if(nums[mid] > target)
            {
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        ans[1] = idx;
        return ans;
    }
}