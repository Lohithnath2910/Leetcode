class Solution {
public:
    int count(int x)
    {
        if(x < 10)
        {
            return x;
        }
        else
        {
            int temp1 = x;
            int temp2 = 0;
            int final = 0;
            while(temp1 != 0)
            {
                temp2 = temp1 % 10;
                final += temp2;
                temp1 /= 10;
            }
            return final;
        }
    }

    int differenceOfSum(vector<int>& nums) 
    {
        int numsum = 0;
        int digitsum = 0;
        for(int i = 0;i < nums.size();i++)
        {
            numsum += nums[i];
            digitsum += (count(nums[i]));
            cout<<numsum<<"   "<<digitsum<<endl;
        }
        return (numsum - digitsum);
    }
};