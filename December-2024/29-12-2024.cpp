*******************************GFG POTD*************************
*	               T.C = O(len(a)) + O(len(b))							                * 
*	               							                        * 
*	               S.C = O(max(a,b))                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        unordered_map<int, bool> mp;
        vector<int> ans;
        
        for(x : a)
        {
            mp[x] = true;
        }
        
        for(x : b)
        {
            if(mp.find(x) != mp.end() && mp[x] == true)
            {
                ans.push_back(x);
                mp[x] = false;
            }
        }
        
        return ans;
    }
};