class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int arr1[5];
        int arr2[5];
        int l = 0;
        int m = (s.size())/2;
        while(l < m-1 && m < s.size())
        {
            if(s[l] == 'a' || s[l] == 'A')
            {
                arr1[0]++; 
            }
            else if(s[l] == 'e' || s[l] == 'E')
            {
                arr1[1]++; 
            }
            else if(s[l] == 'i' || s[l] == 'I')
            {
                arr1[2]++; 
            }
            else if(s[l] == 'o' || s[l] == 'O')
            {
                arr1[3]++; 
            }
            else if(s[l] == 'u' || s[l] == 'U')
            {
                arr1[4]++; 
            }
            if(s[m] == 'a' || s[m] == 'A')
            {
                arr2[0]++; 
            }
            else if(s[m] == 'e' || s[m] == 'E')
            {
                arr2[1]++; 
            }
            else if(s[m] == 'i' || s[m] == 'I')
            {
                arr2[2]++; 
            }
            else if(s[m] == 'o' || s[m] == 'O')
            {
                arr2[3]++; 
            }
            else if(s[m] == 'u' || s[m] == 'U')
            {
                arr2[4]++; 
            }
            l++;
            m++;
        }
        int count1 = 0;
        int count2 = 0;
        bool ans = false;
        for(int i = 0;i < 5;i++)
        {
            count1 += arr1[i];
            count2 += arr2[i];
            cout<<arr1[i]<<"  "<<arr2[i]<<"\n";
        }
        if(count1 == count2)
        {
            ans = true;
        }
        return ans;
    }
};