*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************

//Back-end complete function Template for C++

class Solution {
  public:
    vector<int> dp;
    int n;
    int solve(int index, vector<int>& cost)
    {
        if(index >= n)
        {
            return 0;
        }
        if(dp[index] != -1)
        {
            return dp[index];
        }
        
        return dp[index] = cost[index] + min(solve(index+1, cost), solve(index+2, cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        n = cost.size();
        dp.resize(n, -1);
        
        return min(solve(0, cost), solve(1, cost));
    }
};