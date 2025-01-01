*******************************GFG POTD*************************
*	               T.C = O(n * mlogn)							                * 
*	               							                        * 
*	               S.C = O(n*m)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++
class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        int n = arr.size();
        
        for(int i = 0; i<n; i++)
        {
            string original = arr[i];
            sort(arr[i].begin(), arr[i].end());
            
            mp[arr[i]].push_back(original);
        }
        
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};