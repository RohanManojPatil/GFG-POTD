*******************************GFG POTD*************************
*	               T.C = O(N*K)							                * 
*	               							                        * 
*	               S.C = O(N*K)                                           * 
*	                                                                * 
*********************************************************************
/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        int n=arr.size();
        if(n==0) return NULL;
        priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>>q;
        
        for(int i=0;i<n;i++){
            Node *cur=arr[i];
            while(cur!=NULL){
                q.push({cur->data,cur});
                cur=cur->next;
            }
        }
        
        Node *head=new Node(-1);
        Node *temp=head;
        while(!q.empty()){
            temp->next=q.top().second;
            temp=temp->next;
            q.pop();
        }
        return head->next;
    
    }
};