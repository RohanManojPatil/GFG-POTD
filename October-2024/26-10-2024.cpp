
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        int nodeCount = 0;
        Node* temp = head;
        
        while(temp != NULL)
        {
            if(temp->data == key)
            {
                nodeCount++;
            }
                 
            temp = temp->next;
        }
        
        return nodeCount;
    }
};