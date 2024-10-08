class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> ans;
        int count = 0;
        for(int i = 0;i < nums.size();i++)
        {
            count = 0;
            int k = nums[i];
            for(int j = 0;j < nums.size();j++)
            {
                if((i != j) && (k > nums[j]))
                {
                    count++;
                }
            }
            ans.push_back(count);
        } 
        return ans;   
    }
};