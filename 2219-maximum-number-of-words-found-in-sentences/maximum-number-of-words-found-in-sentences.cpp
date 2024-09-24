class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int max = 0;
        int sum = 0;
        for(int i = 0;i < sentences.size();i++)
        {
            sum = 0;
            for(int j = 0;j < sentences[i].size();j++)
            {
                if(sentences[i][j] == ' ')
                {
                    sum += 1;
                }
            }
            if(sum+1 > max)
            {
                max = sum+1;
            }
        }
        return max;    
    }
};