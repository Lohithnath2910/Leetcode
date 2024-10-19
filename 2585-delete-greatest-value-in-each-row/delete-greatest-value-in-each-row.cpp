class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) 
    {
        int sum = 0;
        for(auto &x:grid)
        {
            sort(x.begin(),x.end());
        }
        int j = 0;
        while(j < grid[0].size())
        {
            int maxi = 0;
            for(int i = 0;i < grid.size();i++)
            {    
                maxi = max(maxi,grid[i][j]);
            }
            j++;
            sum += maxi;
        }
        return sum;    
    }
};