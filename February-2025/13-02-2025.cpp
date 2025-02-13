*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
/*
Node is as follows
class Node {
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
    void solve(Node* root)
    {
        if(!root)
        {
            return;
        }
        
        solve(root->left);
        ans.push_back(root->data);
        solve(root->right);
    }
    bool findTarget(Node *root, int target) {
        solve(root);
        
        int i = 0, j = ans.size() - 1;
        
        while(i<j)
        {
            int sum = ans[i] + ans[j];
            if(sum == target)
            {
                return true;
            }
            else if(sum > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        
        return false;
    }
};