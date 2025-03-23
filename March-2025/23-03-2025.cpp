*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int mod = 1e9+7;
    int func(string &str,int n,vector<int>&dp){
        if(n==0 || n==1) return 1;
        if(dp[n]!=-1) return dp[n]; 
        int cnt=0;
        if(str[n-1] >= '1') cnt = cnt + func(str,n-1,dp)%mod;
        if(str[n-2] =='1' || str[n-2] == '2' && str[n-1] <='6') cnt = (cnt + func(str,n-2,dp)%mod)%mod;
        
        return dp[n] = cnt%mod;
    }
    int countWays(string &digits) {
        // Code here
		    int n=digits.length();
		    if(digits[0]=='0') return 0;
		    vector<int>dp(n+1,-1);
		    
		    return func(digits,n,dp);
    }
};