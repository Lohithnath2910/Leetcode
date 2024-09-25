class Solution {
public:
    void swap(int *x,int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        /*vector<string> ans;
        int order[heights.size()];
        int max = 0;
        for(int i = 0;i < heights.size();i++)
        {
            order[i] = i;
        }
        for(int i = 0;i < heights.size();i++)
        {
            for(int j = 0;j < heights.size()-1;j++)
            {
                if(heights[j+1] > heights[j])
                {
                    swap(&heights[j+1],&heights[j]);
                    swap(&order[j+1],&order[j]);
                }
            }
        }*/
        vector<pair<int,string>> ans;
        for(int i = 0;i < heights.size();i++)
        {
            ans.push_back({heights[i],names[i]});
        }
        sort(ans.rbegin(),ans.rend());
        for(int i = 0;i < heights.size();i++)
        {
            names[i] = ans[i].second;
        }
        return names;   
    }
};