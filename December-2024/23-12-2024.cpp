*******************************GFG POTD*************************
*	               T.C = O(nlogm)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    bool binarySearch(int m, vector<vector<int>> &mat, int rowIndex, int key)
    {
        int start = 0, end = m-1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if(key == mat[rowIndex][mid])
            {
                return true;
            }
            else if(key > mat[rowIndex][mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        
        return false;
    }
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i<n; i++)
        {
            int firstElement = mat[i][0];
            int lastElement = mat[i][m-1];
            
            if(x >= firstElement && x <= lastElement)
            {
                if(binarySearch(m, mat, i, x))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};