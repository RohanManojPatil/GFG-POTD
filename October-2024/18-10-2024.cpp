
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        
        for(int i = 0; i<n; i++)
        {
            ans ^= arr[i];
        }
        
        return ans;
    }
};