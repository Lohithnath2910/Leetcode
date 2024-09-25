class Solution {
public:
    bool num(int x)
    {
        int temp1 = x;
        int temp2 = 0;
        int count = 0;
        bool sum = false;
        while(temp1 != 0)
        {
            count++;
            temp1 /= 10;
        }
        temp1 = x;
        while(temp1 != 0)
        {
            temp2 = temp1 % 10;
            if(temp2 == 0)
            {
                break;
            }
            else if(x % temp2 == 0)
            {
                count--;
            }
            temp1 /= 10;
        }
        if(count == 0)
        {
            sum = true;
        }
        else
        {
            sum = false;
        } 
        return sum;
    }

    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans;
        for(int i = left;i <= right;i++)
        {
            if(i < 10 && i > 0)
            {
                ans.push_back(i);
            }
            else
            {
                if(num(i))
                ans.push_back(i);
            }
        }
        return ans;     
    }
};