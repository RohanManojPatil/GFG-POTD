*******************************GFG POTD*************************
*	               T.C = O(N*M)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    unordered_map<string, int> f;

    bool solve(string s, int index)
    {
        if(index>=s.length())
        {
            return true;
        }
        for(int i = index; i<s.length(); i++)
        {
            string str = s.substr(index, i-index+1);
            if(f.find(str) != f.end())
            {
                if(solve(s, i+1))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        
        for(int i = 0; i<dictionary.size(); i++)
        {
            f[dictionary[i]]++;
        }
        
        if(solve(s, 0))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};