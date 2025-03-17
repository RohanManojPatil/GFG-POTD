*******************************GFG POTD*************************
*	               T.C = O(N^2)							                * 
*	               							                        * 
*	               S.C = O(N*M)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int n;
    vector<vector<int>> dp;
    bool solve(int index, vector<int>& arr, int target)
    {
        if(index >= n)
        {
            if(target == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if(target == 0)
        {
            return 1;
        }
        if(dp[index][target] != -1)
        {
            return dp[index][target];
        }
        
        int incl = 0;
        
        if(target >= arr[index])
        {
            incl = solve(index+1, arr, target-arr[index]);
        }
        
        int excl = solve(index+1, arr, target);
        
        return dp[index][target] = incl || excl;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        n = arr.size();
        dp.resize(n, vector<int>(sum+1, -1));
        
        return solve(0, arr, sum);
    }
};
