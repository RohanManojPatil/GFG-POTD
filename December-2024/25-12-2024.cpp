*******************************GFG POTD*************************
*	               T.C = O(N*M)							                * 
*	               							                        * 
*	               S.C = O(N) + O(M)                                          * 
*	                                                                * 
*********************************************************************
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        unordered_map<int, bool> rowIndex;
        unordered_map<int, bool> colIndex;
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(mat[i][j] == 0)
                {
                    rowIndex[i] = true;
                    colIndex[j] = true;
                }
            }
        }
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(rowIndex.find(i) != rowIndex.end() || colIndex.find(j) != colIndex.end())
                {
                    mat[i][j] = 0;
                }
            }
        }
    }
};