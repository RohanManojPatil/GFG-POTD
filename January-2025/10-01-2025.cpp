*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        int j = 0, n = arr.size();
        int uniqueCount = 0;
        vector<int> ans;
        
        while(j<k)
        {
            if(mp.find(arr[j]) == mp.end())
            {
                uniqueCount++;
            }
            
            mp[arr[j]]++;
            j++;
        }
        
        ans.push_back(uniqueCount);
        
        while(j<n)
        {
            int outgoingElement = arr[j-k];
            mp[outgoingElement]--;
            
            if(mp[outgoingElement] == 0)
            {
                uniqueCount--;
                mp.erase(outgoingElement);
            }
            
            int incomingElement = arr[j];
            mp[incomingElement]++;
            
            if(mp[incomingElement] == 1)
            {
                uniqueCount++;
            }
            
            ans.push_back(uniqueCount);
            
            j++;
        }
        
        return ans;
    }
};