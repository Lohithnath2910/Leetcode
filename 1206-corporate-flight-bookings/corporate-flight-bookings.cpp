class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) 
    {
        vector<int> tot(n+1,0);
        /*int sumcurr = 0;
        int track = 1;

        while(track <= n)
        {
            sumcurr = 0;
            for(int k = 0;k < bookings.size();k++)
            {
                if(track >= bookings[k][0] && track <= bookings[k][1])
                {    
                    sumcurr += bookings[k][2];
                }
            }
            tot.push_back(sumcurr);
            track++; 
        }*/

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