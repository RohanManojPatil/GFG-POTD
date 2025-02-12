*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
/*Complete the function below

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> ans;
    void solve(Node *root)
    {
        if(!root)
        {
            return;
        }
        
        solve(root->left);
        ans.push_back(root->data);
        solve(root->right);
    }
    int kthSmallest(Node *root, int k) {
        solve(root);
        
        if(ans.size() < k)
        {
            return -1;
        }
        return ans[k-1];
    }
};