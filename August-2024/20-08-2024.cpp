//User function Template for C++

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
    map<Node*, Node*> parent(Node* root,int target,Node*&t)
   {
       map<Node*,Node*>par;
       queue<Node*>q;
       q.push(root);
       while(!q.empty())
       {
           Node* node=q.front();
           q.pop();
           if (node->data==target) t=node;
           if (node->left)
           {
               q.push(node->left);
               par[node->left]=node;
           }
           if (node->right)
           {
               q.push(node->right);
               par[node->right]=node;
           }
       }
       return par;
   }
    int minTime(Node* root, int target) 
    {
        Node* t;
        map<Node* , Node*>par=parent(root,target,t);
        queue<Node*>q;
        q.push(t);
        set<Node*>vis;
        vis.insert(t);
        int steps=0;
        while(!q.empty())
        {
          int sz=q.size();
          while(sz--)
          {
               Node*  node=q.front();
               q.pop();
               if (node->left && vis.find(node->left)==vis.end())
               {
                   vis.insert(node->left);
                   q.push(node->left);
               }
               if (node->right && vis.find(node->right)==vis.end())
               {
                    vis.insert(node->right);
                   q.push(node->right);
               }
               if (par.find(node)!=par.end() && vis.find(par[node])==vis.end())
               {
                   vis.insert(par[node]);
                   q.push(par[node]);
               }
          }
          steps++;
        }
        return steps-1;
    }
};