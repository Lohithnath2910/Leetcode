class Solution {
    public int[] sortArray(int[] nums) {
        ms(nums,0,nums.length-1);
        return nums;
    }
    public void ms(int[] nums,int s,int e)
    {
        if(s < e)
        {
            int mid = s + (e - s)/2;

            ms(nums,s,mid);
            ms(nums,mid+1,e);
            m(nums,s,mid,e);
        }
    }
    public void m(int[] nums,int s,int m,int e)
    {
        int k = m - s + 1;
        int f = e - m;

        int[] n1 = new int[k];
        int[] n2 = new int[f];

        for(int i = 0;i < k;i++)
        {
            n1[i] = nums[s+i];
        }
        for(int i = 0;i < f;i++)
        {
            n2[i] = nums[m+i+1];
        }

        int i = 0;
        int j = 0;
        int l = s;

        while(i < k && j < f)
        {
            if(n1[i] <= n2[j])
            {
                nums[l++] = n1[i++];
            }
            else
            {
                nums[l++] = n2[j++];
            }
        }

        while(i < k)
        {
            nums[l++] = n1[i++];
        }

        while(j < f)
        {
            nums[l++] = n2[j++];
        }
    }
}