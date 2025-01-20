*******************************GFG POTD*************************
*	               T.C = O(N+M)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
/* Link list Node
struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        Node* temp = NULL;
        Node* newHead;
        
        while(head1 != NULL && head2 != NULL)
        {
            Node* prev;
            if(head1->data < head2->data)
            {
                prev = head1;
                head1 = head1->next;
            }
            else
            {
                prev = head2;
                head2 = head2->next;
            }
            
            if(temp == NULL)
            {
                temp = prev;
                newHead = temp;
            }
            else
            {
                temp->next = prev;
                temp = temp->next;
            }
        }
        
        if(head1 != NULL)
        {
            temp->next = head1;
        }
        if(head2 != NULL)
        {
            temp->next = head2;
        }
        
        return newHead;
    }
};