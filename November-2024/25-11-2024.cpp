*******************************GFG POTD*************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int startProduct = 1, endProduct = 1;
        int n = arr.size();
        int ans = INT_MIN;
        
        for(int i = 0; i<n; i++)
        {
            startProduct *= arr[i];
            endProduct *= arr[n-i-1];
            
            ans = max({ans, startProduct, endProduct});
            
            if(startProduct == 0)
            {
                startProduct = 1;
            }
            if(endProduct == 0)
            {
                endProduct = 1;
            }
        }
        
        return ans;
    }
};