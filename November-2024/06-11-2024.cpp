
*******************************LEETCODE POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
    int pathSum = 0;
    
    void solve(Node* node, int currentSum)
    {
        if(!node)
        {
            return;
        }
        if(node->left == NULL && node->right == NULL)
        {
            currentSum = (currentSum * 10) + node->data;
            pathSum += currentSum;
            return;
        }
        
        currentSum = (currentSum * 10) + node->data;
        solve(node->left, currentSum);
        solve(node->right, currentSum);
        
    }
    int treePathsSum(Node *root) {
        int currentSum = 0;
        solve(root, currentSum);
        
        return pathSum;
    }
};