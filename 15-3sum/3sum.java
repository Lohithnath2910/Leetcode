class Solution {
    
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        Arrays.sort(nums);
        for(int i = 0;i < nums.length;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) 
            {
                continue;
            }
            int f = i;
            int j = i+1;
            int k = nums.length-1;
            while(j < k)
            {
                List<Integer> l = new ArrayList<>();
                int sum = nums[f] + nums[j] + nums[k];
                if(sum == 0)
                {
                    l.add(nums[f]);
                    l.add(nums[j]);
                    l.add(nums[k]);
                    res.add(l);
                    j++;
                    k--;

                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return res;
    }
}