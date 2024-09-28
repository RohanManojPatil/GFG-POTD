class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
       int n = arr.size();
       vector<int> dp(n, 0);

       for(int i = n-2; i>=0; i--)
       {
            int ans = INT_MAX;
            for(int j = i+1; j<=i+k; j++)
       	    {
               if(j >= n)
               {
                  break;
               }
          
               ans = min(ans, abs(arr[i]-arr[j]) + dp[j]);
       	    }
    
       	    dp[i] = ans;
       }
   
       return dp[0];
    }
};