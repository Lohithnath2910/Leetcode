class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) 
    {
        vector<int> ans(2);
        int count = 0,num = 0;
        for(int i = 0;i < nums.size();i++)
        {
            if (count >= 2)
            {
                break;
            }
            for(int j = i+1;j < nums.size();j++)
            {
                if(nums[i] == nums[j])
                {
                    num = nums[i];
                    count++;
                }
            }
            if(count != 0)
            {
                int temp = count - 1;
                ans[temp] = num;
            }
        }
        return ans;
    }
};