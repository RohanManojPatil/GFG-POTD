class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        int n=str1.length(), m=str2.length();
        
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        
        int maxi=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(str1[i]==str2[j]){
                    dp[i+1][j+1]=1+dp[i][j];
                    maxi=max(maxi, dp[i+1][j+1]);
                }
            }
        }
        return maxi;
    }
};