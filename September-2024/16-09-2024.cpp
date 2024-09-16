// User function Template for C++

class Solution {
  public:
    int maxLength(string& str) {
        int maxi = 0, maxi1 = 0, open = 0, close = 0;
        
        for(int i = 0; i<str.length(); i++)
        {
            if(str[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            
            if(open == close)
            {
                maxi = max(maxi, 2*open);
            }
            
            if(open < close)
            {
                open = close = 0;
            }
        }
        
        open = close = 0;
        for(int i = str.length()-1; i>=0; i--)
        {
            if(str[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            
            if(open == close)
            {
                maxi1 = max(maxi1, 2*open);
            }
            
            if(open > close)
            {
                open = close = 0;
            }
        }
        
        return max(maxi, maxi1);
    }
};