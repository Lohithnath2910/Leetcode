class Solution {
public:
    string makeSmallestPalindrome(string s) 
    {
        for(int i = 0,j = s.size()-1;i < s.size()/2;i++,j--)
        {
            if(s[i] != s[j])
            {
                s[i] < s[j]?s[j] = s[i]:s[i] = s[j];
            }
            else
            {
                continue;
            }
        }
        return s;    
    }
};