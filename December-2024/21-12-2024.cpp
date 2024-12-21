*******************************GFG POTD*************************
*	               T.C = O(N*N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        //mirror and transpose is the method
        int st=0;
        int end =mat[0].size()-1;

        while(st<end){
            for(int i=0;i<mat.size();i++)
            {
                swap(mat[i][st],mat[i][end]);
            }            
            st++;
            end--;
        }
        //transpose
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<i;j++){
               swap(mat[i][j],mat[j][i]); 
            }
        }
    }
};