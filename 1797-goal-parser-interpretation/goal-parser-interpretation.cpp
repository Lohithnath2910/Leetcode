class Solution {
public:
    string interpret(string command) 
    {
        int length = command.size();
        string ans;
        int j = 0;
        for(int i = 0;i<length;i++)
        {
            if(command[i] == 'G')
            {
                ans.push_back('G');
            }
            else if(command[i] == '(' && command[i+1] == ')')
            {
                ans.push_back('o');
                i++;
            }
            else if(command[i] == '(' && command[i+1] == 'a')
            {
                ans.push_back('a');
                ans.push_back('l');
                i += 3;
            }
        }
        return ans;
    }
};