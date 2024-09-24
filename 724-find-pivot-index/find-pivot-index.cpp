class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int l = 0;
        int r = 0;
        int sum = 0;
        for(int i = 0;i < nums.size();i++)
        {
            sum += nums[i];
        }
        for(int i = 0;i < nums.size();i++)
        {
            int p = nums[i];
            r = sum - l - p;
            if(r == l)
            {
                return i;
                break;
            }
            else
            {
                l += p;
            }
        }
       return -1;
    }
};