*******************************GFG POTD*************************
*	               T.C = O(N*M)							                * 
*	               							                        * 
*	               S.C = O(N*M)                                           * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int lcs(string &s1, string &s2) {
        // Get the lengths of the two strings
        int n1 = s1.length(), n2 = s2.length();
        
        // Create a DP table of size (n1+1) x (n2+1) initialized to 0
        vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));
        
        // Fill the DP table
        for(int i = 1; i <= n1; ++i) {
            for(int j = 1; j <= n2; ++j) {
                // If the characters match, add 1 to the LCS length of the previous characters
                if(s1[i-1] == s2[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    // If they don't match, take the maximum LCS length from the top or left cell
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
        // The result is stored in dp[n1][n2]
        return dp[n1][n2];
        
    }
};
