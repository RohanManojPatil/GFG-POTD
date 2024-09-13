// function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    Node* solve(Node* root)
    {
        if(!root)
        {
            return NULL;
        }
        if(root->left == NULL && root->right == NULL)
        {
            return root;
        }
        
        Node* l = solve(root->left);
        Node* r = solve(root->right);
        
        root->left = r;
        root->right = l;
        
        return root;
    }
    void mirror(Node* node) {
        solve(node);
    }
};