*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(Height)                                           * 
*	                                                                * 
*********************************************************************
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
    int maxDiameter = 0;
    
    pair<int, int> solve(Node* node)
    {
        if(!node)
        {
            return {0, 0};
        }
        if(node->left == NULL && node->right == NULL)
        {
            return {1, 0};
        }
        
        pair<int, int> left = solve(node->left);
        pair<int, int> right = solve(node->right);
        
        int maxHeight = max(left.first, right.first) + 1;
        int diameter = left.first + right.first;
        
        maxDiameter = max(maxDiameter, diameter);
        
        return {maxHeight, diameter};
    }
    int diameter(Node* root) {
        solve(root);
        
        return maxDiameter;
    }
};