
*******************************GFG POTD*************************
*	               T.C = O(N*M)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************

void reverse(int rowIndex, vector<vector<int> >& mat)
{
    int i = 0;
    int j = mat[rowIndex].size()-1;
    
    while(i<j)
    {
        swap(mat[rowIndex][i++], mat[rowIndex][j--]);
    }
    
    return;
}
void rotate(vector<vector<int> >& mat) {
    int temp = 0;
    int n = mat.size();
    
    for(int i = 0; i<n; i++)
    {
        for(int j = temp; j<n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
        temp++;
    }
    
    for(int rowIndex = 0; rowIndex<n; rowIndex++)
    {
        reverse(rowIndex, mat);
    }
}