*******************************GFG POTD*************************
*	               T.C = O(N!)							                * 
*	               							                        * 
*	               S.C = O(N!)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    unordered_set<string> st;
    void solve(string &s, unordered_set<int> takenIndex, string temp)
    {
        if(temp.length() == s.length())
        {
            st.insert(temp);
            return;
        }
        for(int i = 0; i<s.length(); i++)
        {
            if(takenIndex.find(i) == takenIndex.end())
            {
                takenIndex.insert(i);
                solve(s, takenIndex, temp+s[i]);
                takenIndex.erase(i);
            }
        }
    }
    vector<string> findPermutation(string &s) {
        unordered_set<int> takenIndex;
        string temp = "";
        solve(s, takenIndex, temp);
        
        vector<string> ans(st.begin(), st.end());
        
        return ans;
    }
};