class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int count1 = n;
        for(int i = 0;i < flowerbed.size();i++)
        {
            if((flowerbed[i] == 0) && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0))
            {
                count1--;
                ++i;
            }
        }
        if(count1 > 0)
        {
            return false;
        }
        return true; 
    }
};