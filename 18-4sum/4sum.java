class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> a = new ArrayList<>();
        Arrays.sort(nums);
        for(int i = 0;i < nums.length;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int f = i;
            for(int j = i+1;j < nums.length;j++)
            {   
                if(j > i+1 && nums[j] == nums[j-1])
                {
                    continue;
                }
                int k = j+1;
                int l = nums.length - 1;

                while(k < l)
                {
                    List<Integer> temp = new ArrayList();
                    long sum = (long)nums[f] + (long)nums[j] + (long)nums[k] + (long)nums[l];
                    if(sum == (long) target)
                    {
                        temp.add(nums[f]);
                        temp.add(nums[j]);
                        temp.add(nums[k]);
                        temp.add(nums[l]);
                        a.add(temp);
                        k++;
                        l--;

                        while (k < l && nums[k] == nums[k - 1]) {
                            k++;
                        }

                        while (k < l && nums[l] == nums[l + 1]) {
                            l--;
                        }
                    }
                    else if(sum > target)
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
                }
            }
        }
        return a;
    }
}