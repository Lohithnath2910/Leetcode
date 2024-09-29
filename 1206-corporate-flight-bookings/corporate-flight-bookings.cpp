class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) 
    {
        vector<int> tot(n+1,0);
        for(auto v: bookings)
        {
            tot[v[0] - 1] += v[2];
            tot[v[1]] -= v[2];
        }

        for(int i = 1;i < n;i++)
        {
            tot[i] += tot[i-1];
        }
        tot.pop_back();
        return tot; 
    }
};