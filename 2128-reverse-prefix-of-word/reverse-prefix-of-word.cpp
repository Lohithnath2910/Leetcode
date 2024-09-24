class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int r = word.find(ch);
        string ans;
        for(int i = 0;i<word.size();i++)
        {
            if(r-i >= 0)
            {
                ans.push_back(word[r-i]);
            }
            else
            {
                ans.push_back(word[i]);
            }
        }
        return ans;
    }
};