class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int temp1 = n;
        int product = 1;
        int sum = 0;
        while(temp1 != 0)
        {
            int temp2 = temp1 % 10;
            product *= temp2;
            sum += temp2;
            temp1 /= 10;
        } 
        return (product - sum);   
    }
};