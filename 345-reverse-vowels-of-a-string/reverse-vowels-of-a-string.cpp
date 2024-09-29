class Solution {
public:
    string reverseVowels(string s) {
        string vow;
        string ans;
        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U')
            {
                vow.push_back(s[i]);
            }
        }
        reverse(vow.begin(),vow.end());
        int it = 0;
        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U')
            {
                ans.push_back(vow[it]);
                it++;
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};