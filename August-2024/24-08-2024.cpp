class Solution {
  public:
    vector<vector<int>> dp;
    // Function to return max value that can be put in knapsack of capacity W.
    int solve(int index, int currentCapacity, int W, vector<int>& wt, vector<int>& val, int n)
    {
        if(index >= n)
        {
            return 0;
        }
        if(dp[index][currentCapacity] != -1)
        {
            return dp[index][currentCapacity];
        }
        
        int incl = 0, excl = 0;
        
        if(currentCapacity + wt[index] <= W)
        {
            incl = val[index] + solve(index+1, currentCapacity+wt[index], W, wt, val, n);
        }
        
        excl = solve(index+1, currentCapacity, W, wt, val, n);
        
        return dp[index][currentCapacity] = max(incl, excl);
    }
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        int n = wt.size();
        dp.resize(n+1, vector<int>(W+1, -1));
        
        return solve(0, 0, W, wt, val, n);
    }
};