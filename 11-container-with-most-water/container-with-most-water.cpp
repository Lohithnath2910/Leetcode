class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int r = 0;
        int l = height.size()-1;
        int max = 0;
        while(r < l)
        {
            int check = min(height[r],height[l]);
            if(check*abs(r-l) >= max)
            {
                max = check*abs(r-l);
            }
            if(height[r] > height[l])
            {
                l--;
            }
            else
            {
                r++;
            }
        }    
        return max;
    }
};