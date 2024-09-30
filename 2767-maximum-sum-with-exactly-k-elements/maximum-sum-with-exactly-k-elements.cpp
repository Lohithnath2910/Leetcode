class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) 
    {
        int sum = *max_element(nums.begin(),nums.end());
        int res = 0;
        for(int i = 0;i < k;i++)
        {
            res += sum + i;
        }
        return res;    
    }
};