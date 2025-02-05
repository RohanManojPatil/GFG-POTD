*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(2^height)                                           * 
*	                                                                * 
*********************************************************************
// Full function Template for C++
/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        queue<Node*> q;
        q.push(node);
        
        while(!q.empty())
        {
            int size = q.size();
            
            while(size--)
            {
                Node* node = q.front();
                q.pop();
                
                Node* leftnode = NULL, *rightnode = NULL;
                
                if(node->left)
                {
                    q.push(node->left);
                    leftnode = node->left;
                }
                if(node->right)
                {
                    q.push(node->right);
                    rightnode = node->right;
                }
                
                node->left = rightnode;
                node->right = leftnode;
            }
        }
        
        
    }
};