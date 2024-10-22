
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************


class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        unordered_map<int, int> mp;
        int countX = 0, countY = 0, ans = 0;
        mp[0] = 1;
        
        for(int i = 0; i<arr.size(); i++)
        {
            if(arr[i] == x)
            {
                countX++;
            }
            else if(arr[i] == y)
            {
                countY++;
            }
            
            int diff = countX-countY;
            
            if(mp.find(diff) != mp.end())
            {
                ans += mp[diff];
                mp[diff] = mp[diff]+1;
            }
            else
            {
                mp[diff] = 1;
            }
        }
        
        return ans;
    }
};