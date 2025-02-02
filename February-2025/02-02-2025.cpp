*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(2^height)                                           * 
*	                                                                * 
*********************************************************************
/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        queue<Node*> q;
        vector<vector<int>> ans;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp;
            
            while(size--)
            {
                Node* node = q.front();
                q.pop();
                temp.push_back(node->data);
                
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            
            ans.push_back(temp);
        }
        
        return ans;
    }
};