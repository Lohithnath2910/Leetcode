class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int count = 0;
        int len = 0;
        for(int i = 0;i < nums.size();i++)
        {
            len = 0;
            int temp1 = nums[i];
            while(temp1 != 0)
            {
                len++;
                temp1 /= 10;
            }
            if(len % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};