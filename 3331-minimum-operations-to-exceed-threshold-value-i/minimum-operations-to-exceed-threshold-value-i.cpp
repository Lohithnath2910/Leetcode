class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int count = nums.size();
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] >= k)
            {
                count--;
            }
        }
        return count;    
    }
};