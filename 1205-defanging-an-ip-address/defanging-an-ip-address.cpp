class Solution {
public:
    string defangIPaddr(string address) 
    {
        int length = address.size();
        string ans;
        for(int i = 0;i<length;i++)
        {
            if(address[i] != '.')
            {
                ans.push_back(address[i]);
            }
            else
            {
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
        }
        return ans; 
    }
};