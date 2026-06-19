class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        return findDuplicates(nums);
    }

       public List<Integer> findDuplicates(int[] nums) {
        List<Integer> a = new ArrayList<>();
        int n = nums.length;
        int i = 0;
        while(i < n)
        {
            int r = nums[i] - 1;
            if(nums[i] == i+1 || nums[r] == nums[i]) i++;
            else
            {
                s(nums,i,r);
            }
        }
        for(int j = 0;j < n;j++)
        {
            if(nums[j] != j+1)
            {
                a.add(j+1);
            }
        }
        return a;
    }
    public void s(int[] n,int k,int m)
    {
        int temp = n[k];
        n[k] = n[m];
        n[m] = temp;
    }
}