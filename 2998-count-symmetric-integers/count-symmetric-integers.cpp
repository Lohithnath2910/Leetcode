class Solution {
public:
    bool c(int x)
    {
        string s = to_string(x);
        int n = s.length();
        if(n%2 == 1)
        {
            return false;
        }
        int l = 0;
        int r = 0;
        for(int i =0 ;i <n/2;i++)
        {
            l += s[i] - '0';
            r += s[n-i-1] - '0';
        }
        return l == r;
    }
    int countSymmetricIntegers(int low, int high) 
    {
        int res = 0;
        for(int i = low;i<=high;i++)
        {
            if(c(i))
            {
                res++;
            }
        }
        return res;    
    }
};