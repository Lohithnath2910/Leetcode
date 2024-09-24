class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int l = 0;
        int r = 0;
        int count = 0;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == 'R')
            {
                cout<<s[i]<<"\n";
                r++;
            }
            if(s[i] == 'L')
            {
                cout<<s[i]<<"\n";
                l++;
            }
            if(r == l)
            {
                count++;
                cout<<count<<"\n";
                r = 0;
                l = 0;
            }
        }
        return count; 
    }
};