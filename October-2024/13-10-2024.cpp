
*******************************GFG POTD******************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        if(head==NULL || head->next==NULL)
        {
            return;
        }
        Node *curr=head->next;
        Node *prev=head;
        int count =2;
        while(curr!=NULL)
        {
            if(count%2==0)
            {
                Node *temp=curr;
                curr=curr->next;
                prev->next=curr;
                delete temp;
            }else{
                prev=curr;
                curr=curr->next;
            }
            count++;
        }
    }
};