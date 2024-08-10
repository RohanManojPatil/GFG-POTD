/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    pair<long long, bool> solve(Node* node)
    {
        if(!node)
        {
            return {0, true};
        }
        
        if(node->left == NULL && node->right == NULL)
        {
            return {node->data, true};
        }
        
        pair<long long, bool> left = solve(node->left);
        pair<long long, bool> right = solve(node->right);
        
        return {left.first+right.first+node->data, (left.first+right.first == node->data) && (left.second && right.second) }; 
        
    }
    bool isSumTree(Node* root) {
        return solve(root).second;
    }
};