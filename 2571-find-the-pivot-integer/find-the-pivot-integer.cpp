class Solution {
public:
    int pivotInteger(int n) 
    {
        int sum = n*(n+1)/2;
        double a = sqrt(sum);

        if(ceil(a) - a == 0)
        {
            return int(a);
        }
        else
        {
            return -1;
        }
    }
};