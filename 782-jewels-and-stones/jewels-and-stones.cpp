class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int len1 = stones.size();
        int len2 = jewels.size();
        int count = 0;
        for(int i = 0;i < len2;i++)
        {
            for(int j = 0;j < len1;j++)
            {
                if(jewels[i] == stones[j])
                {
                    count++;
                }
                else 
                continue;
            }
        }
        return count;    
    }
};