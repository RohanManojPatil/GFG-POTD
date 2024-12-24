*******************************GFG POTD*************************
*	               T.C = O(log(n*m))							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    bool binarySearch(int rowIndex, int cols, vector<vector<int>> &mat, int x)
    {
        int start = 0;
        int end = cols - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if(mat[rowIndex][mid] == x)
            {
                return true;
            }
            else if(mat[rowIndex][mid] >= x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        
        return false;
    }
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        int start = 0;
        int end = n-1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if(mat[mid][0] <= x && mat[mid][m-1] >= x)
            {
                return binarySearch(mid, m, mat, x);
            }
            else if(mat[mid][0] >= x)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        
        return false;
    }
};