class Solution {
public:
    string toLowerCase(string s) 
    {

	    for (auto& x : s) 
        { 
            if(x-'0' >= 0 && x-'0' <= 9)
            {
                continue;
            }
		    x = tolower(x); 
	    }  
	    return s; 
    }   
};