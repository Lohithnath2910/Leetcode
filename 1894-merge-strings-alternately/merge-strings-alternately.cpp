class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string ans = "";
        int l = word1.size();
        int r = word2.size();
        int i = 0;
        int j = 0;
        while(i < l && j < r)
        {
            ans += word1[i];
            i++;
            ans += word2[j];
            j++;
        }
        while(i < l)
        {
            ans += word1[i];
            i++; 
        }
        while(j < r)
        {
            ans += word2[j];
            j++;
        }
        return ans;
    }
};