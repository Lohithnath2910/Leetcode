class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        //reverse(s.begin(),s.end());
        for(int i = 0,j = s.size()-1;i < s.size()/2; i++,j--)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }    
    }
};