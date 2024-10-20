class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int prod = 1;
        vector<int> ans(nums.size(),1);
        for(int i = 1;i < nums.size();i++)
        {
            ans[i] = ans[i-1] * nums[i-1];
        }
        prod = nums[nums.size()-1];
        for(int j = nums.size()-2;j >= 0;j--)
        {
            ans[j] *= prod;
            prod *= nums[j];
        }
        return ans;    
    }
};