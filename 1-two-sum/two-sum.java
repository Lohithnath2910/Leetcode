class Solution {
    public int[] twoSum(int[] nums, int target) {
        int l = 0, h = nums.length-1;
        int[][] ans = new int[nums.length][2];

        for(int i = 0;i <= h;i++)
        {
            ans[i][0] = nums[i];
            ans[i][1] = i;
        }

        Arrays.sort(ans, (a, b) -> Integer.compare(a[0], b[0]));
        
        while(l < h)
        {
            int s = ans[l][0] + ans[h][0];
            if(s == target)
            {
                return new int[]{ans[l][1], ans[h][1]};
            }
            else if(s > target)
            {
                h--;
            }
            else if(s < target)
            {
                l++;
            }
        }

        return new int[]{};
    }
}