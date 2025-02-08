*******************************GFG POTD*************************
*	               T.C = O(N) 							                * 
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
    void traverseLeftBoundry(Node* node)
    {
        if(!node || node->left == NULL && node->right == NULL)
        {
            return;
        }
        
        if(node->data != -1)
        {
            ans.push_back(node->data);
            node->data = -1;
        }
        
        if(node->left)
        {
            traverseLeftBoundry(node->left);
        }
        else
        {
            traverseLeftBoundry(node->right);
        }
    }
    
    void traverseLeafNodes(Node* node)
    {
        if(!node)
        {
            return;
        }
        if(node->left == NULL && node->right == NULL && node->data != -1)
        {
            ans.push_back(node->data);
            node->data = -1;
            return;
        }
        
        traverseLeafNodes(node->left);
        traverseLeafNodes(node->right);
    }
    
    void traverseRightBoundry(Node* node)
    {
        if(!node || node->left == NULL && node->right == NULL)
        {
            return;
        }
        
        if(node->right)
        {
            traverseRightBoundry(node->right);
        }
        else
        {
            traverseRightBoundry(node->left);
        }
        
        if(node->data != -1)
        {
            ans.push_back(node->data);
            node->data = -1;
        }
        
        return;
    }
    vector<int> boundaryTraversal(Node *root) {
       ans.push_back(root->data);
       root->data = -1;
       traverseLeftBoundry(root->left);
       traverseLeafNodes(root);
       traverseRightBoundry(root->right);
       
       return ans;
    }
};