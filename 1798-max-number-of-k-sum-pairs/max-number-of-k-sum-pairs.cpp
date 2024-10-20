class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int s = 0;
        int l = 0;
        int r = nums.size()-1;
        sort(nums.begin(),nums.end());
        while(l < r)
        {
            if(nums[r] + nums[l] == k)
            {
                s++;
                r--;
                l++;
            }
            else if(nums[l]+nums[r] > k)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return s;    
    }
};