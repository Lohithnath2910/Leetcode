class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int len = nums.size();
        nums.resize(nums.size()+nums.size());
        for(int i = 0;i<len;i++)
        {
            nums[i + (len)] = nums[i];
        }
        return nums;
    }
};