
*******************************GFG POTD******************************
*	               T.C = O(n)						                * 
*	               							                        * 
*	               S.C = O(1)                                       * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        vector<int> ans;
        
        for(int i = 0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it : mp)
        {
            if(it.second > n/3)
            {
                ans.push_back(it.first);
            }
        }
        
        if(ans.size())
        {
            return ans;
        }
        else
        {
            return {-1};
        }
    }
};