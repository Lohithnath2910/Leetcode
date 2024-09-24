class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        int len = nums.size();
        vector<int> ans(len);
        int l[len];
        int r[len];
        int sum = 0;
        int j = 0;
        l[0] = 0;
        for(int i = 1; i < len;i++)
        {
            /*j = i;
            sum = 0;
            while(j != 0)
            {
                sum += nums[j-1];
                j--; 
            }*/
            l[i] = l[i-1] + nums[i-1];
            cout<<l[i]<<"\n";
        }
        r[len-1] = 0;
        for(int i = len-2; i >= 0;i--)
        {
            /*j = i+1;
            sum = 0;
            while(j != len)
            {
                sum += nums[j];
                j++; 
            }*/
            r[i] = r[i+1] + nums[i+1];
        }
        for(int i = 0; i < len ;i++)
        {
            ans[i] = abs(l[i] - r[i]);
        }
        return ans;
    }
};