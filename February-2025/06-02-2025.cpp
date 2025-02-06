*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(height)                                           * 
*	                                                                * 
*********************************************************************
// Class that contains the logic to build the binary tree
/*
Definition of the Node class
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    unordered_map<int, int> mp;
    int index = 0;
    Node* solve(int n, vector<int> &inorder, vector<int> &preorder, int start, int end)
    {
        if(index >= n || start > end)
        {
            return NULL;
        }
        
        int temp = preorder[index++];
        Node* node = new Node(temp);
        
        node->left = solve(n, inorder, preorder, start, mp[temp]-1);
        node->right = solve(n, inorder, preorder, mp[temp]+1, end);
        
        return node;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        int n = inorder.size();
        int start = 0, end = n-1;
        for(int i = 0; i<n; i++)
        {
            mp[inorder[i]] = i;
        }
        
        return solve(n, inorder, preorder, start, end);
    }
};