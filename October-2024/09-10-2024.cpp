
*******************************GFG POTD******************************
*	               T.C = O(n*m)							                * 
*	               							                        * 
*	               S.C = O(n*m)                                          * 
*	                                                                * 
*********************************************************************
/*structure of the node of the linked list is as

struct Node
{
    int data;
    Node* right, *down;

    Node(int x){
        data = x;
        right = NULL;
        down = NULL;
    }
};
*/

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution {
  public:

    Node* dfs(int i, int j, vector<vector<int>>& mat, int n, int m)
    {
        // Base case: out of bounds
        if(i >= n || j >= m)
        {
            return NULL;
        }
    
        // Create a new node for the current cell
        Node* node = new Node(mat[i][j]);
        
        // Recursively set the right and down pointers
        node->right = dfs(i, j + 1, mat, n, m);
        node->down = dfs(i + 1, j, mat, n, m);
        
        return node;
    }
    
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
    
        // Start the DFS from the top-left corner of the matrix
        return dfs(0, 0, mat, n, m);
    }

};