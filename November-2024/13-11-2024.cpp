
*******************************GFG POTD*************************
*	               T.C = O(N+M)							                * 
*	               							                        * 
*	               S.C = O(N+M)                                           * 
*	                                                                * 
*********************************************************************
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        Node* temp1 = head1, *temp2 = head2;
        unordered_map<Node*, bool> presence;
        
        while(temp1 != NULL || temp2 != NULL)
        {
            if(temp1 != NULL)
            {
                if(presence.find(temp1) != presence.end())
                {
                    return temp1->data;
                }
                
                presence[temp1] = true;
                temp1 = temp1->next;
            }
            
            if(temp2 != NULL)
            {
                if(presence.find(temp2) != presence.end())
                {
                    return temp2->data;
                }
                
                presence[temp2] = true;
                temp2 = temp2->next;
            }
        }
        
        
    }
};