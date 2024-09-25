class Solution {
public:
    vector<int> numberGame(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        int alice = 0;
        int bob = 0;
        int i = 0;
        while(i < nums.size())
        {
            int alice = nums[i++];
            int bob = nums[i++];
            arr.push_back(bob);
            arr.push_back(alice);
        }
        return arr;
    }
};