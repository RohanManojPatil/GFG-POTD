*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(2^height)                                           * 
*	                                                                * 
*********************************************************************
// User function template for C++

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to find the height of a binary tree.
    int height(Node* node) {
        queue<Node*> q;
        q.push(node);
        int height = 0;
        
        while(!q.empty())
        {
            int size = q.size();
            
            while(size--)
            {
                Node* node = q.front();
                q.pop();
                
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            
            height++;
        }
        
        return height-1;
    }
};