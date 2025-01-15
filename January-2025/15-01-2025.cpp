*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int ans = 0;
        unordered_map<int, int> mp;
        int sum = 0;
        
        for(int i = 0; i<arr.size(); i++)
        {
            sum += arr[i];
            
            if(sum == k)
            {
                ans = i+1;
            }
            else if(mp.find(sum-k) != mp.end())
            {
                ans = max(ans, i - mp[sum-k]);
            }
            
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        
        return ans;
    }
};