class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int res = 0;
        int b = 0;
        for(int i = 0;i < nums.size();i++)
        {
            res += nums[i];
            if(res == 0)
            {
                b++;
            }
        }
        return b;
    }
};