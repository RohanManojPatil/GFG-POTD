*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int, int> mp;
        int count = 0;
        
        for(x : arr)
        {
            int remaining = target - x;
            if(mp.find(remaining) != mp.end())
            {
                count += mp[remaining];
            }
            
            mp[x]++;
        }
        
        return count;
    }
};