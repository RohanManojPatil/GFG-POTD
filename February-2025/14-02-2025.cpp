*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
     public:
    void correctBST(Node* root) {
        // add code here.
        Node* prev = nullptr;
        Node* corr = nullptr;
        Node* corr2 = nullptr;
        bool flag = false;
        inorder(root,prev,corr,corr2,flag);
        swap(corr->data,corr2->data);
        
        
    }
    
  void inorder(Node* root,Node* &prev,Node* &corr,Node* &corr2 , bool &flag){
        if(root == nullptr) return;
        
        inorder(root->left,prev,corr,corr2,flag);
        if(flag ){ if(root->data<prev->data) corr2= root; }
        else if(prev){  if(prev->data>root->data){ corr = prev; corr2 = root;flag = true; }}
        prev = root;
        inorder(root->right,prev,corr,corr2, flag);
    }
};