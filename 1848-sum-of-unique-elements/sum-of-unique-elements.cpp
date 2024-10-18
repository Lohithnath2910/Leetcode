class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        int sum = 0;
        sort(nums.begin(),nums.end());
        int k = nums[(nums.size()) - 1];
        vector<int> arr(k+1,0);
        for(int i = 0;i < nums.size();i++)
        {
            arr[nums[i]]++;
        }
        for(int i = 0;i<k+1;i++)
        {
            if(arr[i] == 1)
            {
                sum += i;
            }
            cout<<arr[i]<<"\n";
        }
        return sum;    
    }
};