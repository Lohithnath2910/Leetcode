class Solution {
public:
    string generateTheString(int n) 
    {
        if(n % 2 == 0)
        {
            string a = "";
            for(int i = 1;i < n;i++)
            {
                a += 'a';
            }
            a += 'b';
            return a;
        }
        else
        {
            string a = "";
            for(int i = 1;i <= n;i++)
            {
                a += 'a';
            }
            return a;
        } 
    }
};