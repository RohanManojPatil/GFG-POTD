
class Solution {
  public:
    string reverse(string s)
    {
        int i = 0, j = s.length()-1;
        
        while(i<j)
        {
            swap(s[i++], s[j--]);
        }
        
        return s;
    }
    string reverseWords(string str) {
        int n = str.length();
        string ans = "", temp = "";
        
        for(int i = n-1; i>=0; i--)
        {
            if(str[i] == '.')
            {
                ans += reverse(temp);
                temp = "";
                ans.push_back('.');
            }
            else
            {
                temp.push_back(str[i]);
            }
        }
        
        ans += reverse(temp);
        
        return ans;
    }
};