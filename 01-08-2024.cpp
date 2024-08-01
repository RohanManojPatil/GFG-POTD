public:
    vector<int> ans;
    void traverse(vector<vector<int> > &mat, int startRow, int startCol, int endRow, int endCol)
    {
        if (startRow > endRow || startCol > endCol) {
            return;
        }
        
        for (int col = startCol; col <= endCol; col++) {
            ans.push_back(mat[startRow][col]);
        }
        for (int row = startRow + 1; row <= endRow; row++) {
            ans.push_back(mat[row][endCol]);
        }
        if (startRow < endRow) {
            for (int col = endCol - 1; col >= startCol; col--) {
                ans.push_back(mat[endRow][col]);
            }
        }
        if (startCol < endCol) {
            for (int row = endRow - 1; row > startRow; row--) {
                ans.push_back(mat[row][startCol]);
            }
        }
        
        traverse(mat, startRow + 1, startCol + 1, endRow - 1, endCol - 1);
    }
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        traverse(matrix, 0, 0, n-1, m-1);
        
        return ans;
    }