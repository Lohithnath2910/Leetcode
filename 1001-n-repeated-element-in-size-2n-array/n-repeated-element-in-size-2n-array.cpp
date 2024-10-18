class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int s = 0;
        for(int i = 0;i < (nums.size()/2) + 1;i++)
        {
            cout<<nums[i]<<"\n";
            if(nums[i] == nums[i+1])
            {
                s = nums[i];
                break;
            }
        }
        return s;
    }
};