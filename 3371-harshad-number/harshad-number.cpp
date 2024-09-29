class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) 
    {
        int sum = 0;
        int ans = -1;
        int temp = x;
        while(temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if(x % sum == 0)
        {
            ans = sum;
            return ans;
        }    
        return ans;
    }
};