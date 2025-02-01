class Solution {
  public:
    int n, m, len;
    vector<int> dirX = {-1, 1, 0, 0};
    vector<int> dirY = {0, 0, -1, 1};
    bool ans = false;  // Indicates whether the word is found
    
    bool valid(int row, int col, vector<vector<int>>& vis) {
        return row >= 0 && row < n && col >= 0 && col < m && !vis[row][col];
    }
    
    void solve(int row, int col, int index, vector<vector<int>>& vis, vector<vector<char>>& mat, string& word) {
        if (ans) return; // If word is already found, stop further recursion
        if (index == len) {
            ans = true;
            return;
        }
        
        vis[row][col] = true;
        
        for (int i = 0; i < 4; i++) {
            int newX = row + dirX[i];
            int newY = col + dirY[i];

            if (valid(newX, newY, vis) && mat[newX][newY] == word[index]) {
                solve(newX, newY, index + 1, vis, mat, word);
            }
        }
        
        vis[row][col] = false; // Backtrack
    }

    bool isWordExist(vector<vector<char>>& mat, string& word) {
        n = mat.size();
        m = mat[0].size();
        len = word.length();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == word[0]) {
                    solve(i, j, 1, vis, mat, word);
                    if (ans) return true; // If word is found, return immediately
                }
            }
        }
        
        return ans;
    }
};
