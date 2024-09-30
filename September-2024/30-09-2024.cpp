/*
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
    void solve(Node* node, multiset<int> &temp)
    {
        if(!node)
        {
            return;
        }
        
        solve(node->left, temp);
        temp.insert(node->data);
        solve(node->right, temp);
    }
    vector<int> merge(Node *root1, Node *root2) {
        multiset<int> mt;
        
        solve(root1, mt);
        solve(root2, mt);
        
        vector<int> ans(mt.begin(), mt.end());
        
        return ans;
    }
};