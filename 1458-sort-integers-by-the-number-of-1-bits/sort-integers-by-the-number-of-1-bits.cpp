class Solution {
public:
    int bit(int x)
    {
        int sum = 0;
        int temp = x;
        while(temp > 0)
        {
            sum += temp%2;
            temp /= 2; 
        }
        return sum;
    }
    vector<int> sortByBits(vector<int>& arr) 
    {
        vector<pair<int,int>> res;
        for(int k : arr)
        {
            int co = bit(k);
            res.push_back({co,k});
        }
        vector<int> ans;
        sort(res.begin(), res.end(), 
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 if (a.first == b.first) return a.second < b.second;
                 return a.first < b.first;
             });

        for(auto p : res)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};