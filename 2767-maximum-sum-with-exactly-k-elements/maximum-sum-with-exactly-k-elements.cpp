class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) 
    {
        int sum = *max_element(nums.begin(),nums.end());
        return ((k*(k-1))/2 + sum*k);    
    }
};