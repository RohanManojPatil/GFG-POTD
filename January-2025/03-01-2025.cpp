*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        long prefixXOR = 0;
        long ans = 0;
        unordered_map<int, int> mp;
        
        for(x : arr)
        {
            prefixXOR ^= x;
            
            if(prefixXOR == k)
            {
                ans++;
            }
            
            ans += mp[prefixXOR ^ k];
            mp[prefixXOR]++;
        }
        
        return ans;
    }
};