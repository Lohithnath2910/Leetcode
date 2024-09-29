class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int peak = 0;    
        int check = 0;
        for(int i = 0;i < gain.size();i++)
        {
            check += gain[i];
            if(check > peak)
            {
                peak = check;
            }
        } 
        return peak;   
    }
};