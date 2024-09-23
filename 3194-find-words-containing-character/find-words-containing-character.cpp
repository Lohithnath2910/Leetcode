class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        int len = words.size();
        vector<int> ans;
        for(int i = 0; i<len;i++)
        {
            int pos = words[i].find(x);
            cout<<pos;
            if(pos != -1)
            {
                ans.push_back(i);
            }
        }
        return ans;    
    }
};