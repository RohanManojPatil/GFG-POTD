*******************************GFG POTD*************************
*	               T.C = O(N*M)							                * 
*	               							                        * 
*	               S.C = O(N*M)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
    int n = mat.size(), m = mat[0].size();
    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = m - 1;
    vector<int> ans;
    
    while (startRow <= endRow && startCol <= endCol) {
        // Left to Right
        for (int col = startCol; col <= endCol; col++) {
            ans.push_back(mat[startRow][col]);
        }
        startRow++;

        // Top to Bottom
        for (int row = startRow; row <= endRow; row++) {
            ans.push_back(mat[row][endCol]);
        }
        endCol--;

        // Right to Left
        if (startRow <= endRow) { // Check to avoid redundant traversal
            for (int col = endCol; col >= startCol; col--) {
                ans.push_back(mat[endRow][col]);
            }
            endRow--;
        }

        // Bottom to Top
        if (startCol <= endCol) { // Check to avoid redundant traversal
            for (int row = endRow; row >= startRow; row--) {
                ans.push_back(mat[row][startCol]);
            }
            startCol++;
        }
    }

    return ans;
}

};