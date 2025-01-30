*******************************GFG POTD*************************
*	               T.C = O(N!)							                * 
*	               							                        * 
*	               S.C = O(N!)                                          * 
*	                                                                * 
*********************************************************************
// User function Template for C++

class Solution{
public:
    vector<vector<bool>> board;
unordered_set<int> diagonal1, diagonal2, row;
vector<int> path;
vector<vector<int>> ans;

bool checkDiagonal(int row, int col) {
    // Diagonal1 represents (i-j) and diagonal2 represents (i+j)
    return diagonal1.find(row - col) == diagonal1.end() && diagonal2.find(row + col) == diagonal2.end();
}

void solve(int j, int n) {
    if (j == n) {
        ans.push_back(path);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (row.find(i) == row.end() && checkDiagonal(i, j)) {
            row.insert(i);
            diagonal1.insert(i - j);
            diagonal2.insert(i + j);
            board[i][j] = 1;
            path.push_back(i+1);

            solve(j + 1, n);

            row.erase(i);
            diagonal1.erase(i - j);
            diagonal2.erase(i + j);
            board[i][j] = 0;
            path.pop_back();
        }
    }
}

vector<vector<int>> nQueen(int n) {
    board.resize(n, vector<bool>(n, 0));
    solve(0, n);
    return ans;
}

};