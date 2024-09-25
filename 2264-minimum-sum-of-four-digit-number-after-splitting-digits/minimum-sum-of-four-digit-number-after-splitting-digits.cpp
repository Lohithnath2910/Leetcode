class Solution {
public:
    int minimumSum(int num) 
    {
        vector<int> arr(4);
        int temp1 = num;
        int temp2 = 0;
        int i = 0; 
        while(temp1 != 0)
        {
            temp2 = temp1 % 10;
            temp1 /= 10;
            arr[i] = temp2;
            i++;
        }
        sort(arr.begin(),arr.end());
        return ((arr[0]*10 + arr[3]) + (arr[1]*10 + arr[2]));    
    }
};