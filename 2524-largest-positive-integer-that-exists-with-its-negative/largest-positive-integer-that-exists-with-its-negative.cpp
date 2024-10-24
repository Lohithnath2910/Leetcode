class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        int f = 0;
        int r = nums.size() - 1; 
        int res = 0;
        sort(nums.begin(),nums.end());
        while(f < r)
        {
            if((nums[f] + nums[r]) == 0)
            {
                return  nums[r];
            }
            
            else if((nums[f] + nums[r]) < 0)
                f++;
            
            else 
            r--;
        }
        return -1;
    }
};