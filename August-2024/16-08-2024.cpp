class Solution
{
    public:
    vector<int> dp;
    int solve(int n, int x, int y, int z)
    {
        if(n <= 0)
        {
            return 0;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }
        
        int op1 = INT_MIN, op2 = INT_MIN, op3 = INT_MIN;
        
        if(n-x >= 0)
        {
            op1 = 1 + solve(n-x, x, y, z);
        }
        if(n-y >= 0)
        {
            op2 = 1 + solve(n-y, x, y, z);
        }
        if(n-z >= 0)
        {
            op3 = 1 + solve(n-z, x, y, z);
        }
        
        return dp[n] = max(op1, max(op2, op3));
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        dp.resize(n+1, -1);
        int ans = solve(n, x, y, z);
        if(ans < 0)
        {
            return 0;
        }
        
        return ans;
    }
};