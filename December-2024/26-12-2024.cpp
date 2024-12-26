*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int, bool> presence;
        
        for(auto x : arr)
        {
            int remainingElement = target - x;
            if(presence.find(remainingElement) != presence.end())
            {
                return true;
            }
            
            presence[x] = true;
        }
        
        return false;
    }
};