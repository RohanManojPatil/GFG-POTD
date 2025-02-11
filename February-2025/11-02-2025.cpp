*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution
{
    public:
    
    bool solve(Node* root, int min, int max){
        if(root == NULL){
            return true;
        }
        
        if(root->data>=min && root->data<=max){
            bool left = solve(root->left, min, root->data-1);
            bool right = solve(root->right, root->data+1, max);
            return left && right; 
            
            }
            
            return false;
    }
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        int min = INT_MIN;
        int max = INT_MAX;
        return solve(root,min, max);
    }
};

