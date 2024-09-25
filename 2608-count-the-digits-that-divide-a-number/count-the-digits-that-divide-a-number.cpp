class Solution {
public:
    int countDigits(int num) 
    {
        int temp1 = num;
        int temp2 = 0;
        int sum = 0;
        while(temp1 != 0)
        {
            temp2 = temp1 % 10;
            if(num % temp2 == 0)
            {
                sum++;
            }
            temp1 /= 10;
        }
        return sum;    
    }
};