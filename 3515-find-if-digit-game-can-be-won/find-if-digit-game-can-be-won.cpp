class Solution {
public:
    bool canAliceWin(vector<int>& nums) 
    {
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] <= 9 && nums[i] >= 1)
            {
                sum1 += nums[i];
            }
            if(nums[i] > 9)
            {
                sum2 += nums[i];
            }
        }
        return ((sum1 == sum2) ? false : true);    
    }
};