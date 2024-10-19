class Solution {
public:
    int minTimeToType(string word) 
    {
        int time = 0;
        char c = 'a';
        for(int i = 0;i <word.size();i++)
        {
            int check = abs(word[i]-c);
            check = min(check,26-check);
            time+=(check+1);
            c = word[i];
        }    
        return time;
    }
};