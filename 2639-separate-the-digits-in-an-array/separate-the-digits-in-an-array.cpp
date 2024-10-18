class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) 
    {
        vector<int> ans;
        for(auto &x : nums)
        {
            string str = to_string(x);
            for(auto &s: str)
            {
                ans.push_back(s-'0');
            }
        }
        return ans;
    }
};