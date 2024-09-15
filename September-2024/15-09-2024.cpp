/* Structure for tree and linked list

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution {
  public:
    Node* head = NULL, *last = NULL;
    void solve(Node* root)
    {
        if(!root) 
        {
            return;
        }
        
        solve(root->left);
        
        if(!head)
        {
            head = root;
        }
        
        if(last)
        {
            last->right = root;
        }
        
        root->left = last;
        last = root;
        
        
        solve(root->right);
    }
    Node* bToDLL(Node* root) {
        solve(root);
        
        return head;
    }
};