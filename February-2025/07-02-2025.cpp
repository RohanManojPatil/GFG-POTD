*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
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
    vector<int> ans;
    void solve(Node* node)
    {
        if(!node)
        {
            return;
        }
        
        solve(node->left);
        ans.push_back(node->data);
        solve(node->right);
    }
    vector<int> inOrder(Node* root) {
        solve(root);
        
        return ans;
    }
};