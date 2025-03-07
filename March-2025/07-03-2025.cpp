******************************GFG POTD*************************
*	               T.C = O(N^2)							                * 
*	               							                        * 
*	               S.C = O(N^2)                                          * 
*	                                                                * 
*********************************************************************

// User function Template for C++

class Solution {
  public:
    // Function to find the Longest Common Subsequence (LCS) between two strings
    int lcs(string &s1, string &s2) {
        int n = s1.length();
        // Create a DP table of size (n+1) x (n+1) initialized to 0
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        
        // Fill the DP table
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                // If characters match, add 1 to the LCS length from the previous diagonal cell
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                // If characters don't match, take the maximum LCS length from the left or top cell
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        
        // The bottom-right cell contains the length of the LCS
        return dp[n][n];
    }

    // Function to find the length of the longest palindromic subsequence
    int longestPalinSubseq(string &s) {
        // Reverse the input string
        string rev(s);
        reverse(rev.begin(), rev.end());
        
        // Find the LCS between the original string and its reverse
        return lcs(s, rev);
    }
};