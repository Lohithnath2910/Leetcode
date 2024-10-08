class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) 
    {
        sort(seats.begin(),seats.end());    
        sort(students.begin(),students.end());
        int count = 0;
        for(int n = 0; n < seats.size();n++)
        {
            int diff = abs(seats[n] - students[n]);
            count += diff;
        }
        return count;
    }
};