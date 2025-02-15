*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(height)                                           * 
*	                                                                * 
*********************************************************************
/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    Node* solve(Node* node, Node* n1, Node* n2)
    {
        if(!node)
        {
            return NULL;
        }
        
        if(node == n1 || node == n2)
        {
            return node;
        }
        
        Node* left = solve(node->left, n1, n2);
        Node* right = solve(node->right, n1, n2);
        
        if(left != NULL && right != NULL)
        {
            return node;
        }
        
        if(left != NULL)
        {
            return left;
        }
        else
        {
            return right;
        }
    }
    Node* LCA(Node* root, Node* n1, Node* n2) {
        return solve(root, n1, n2);
    }
};