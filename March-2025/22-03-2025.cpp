*******************************GFG POTD*************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(n)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int solve(vector<int>& arr, int index, int size, vector<int> &dp)
    {
        if(index >= size)
        {
            return 0;
        }
        if(dp[index] != -1)
        {
            return dp[index];
        }
        
        int incl = arr[index] + solve(arr, index+2, size, dp);
        int excl = solve(arr, index+1, size, dp);
        
        return dp[index] = max(incl, excl);
    }
    int maxValue(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        
        return max(solve(arr, 0, n-1, dp1), solve(arr, 1, n, dp2));
    }
};
