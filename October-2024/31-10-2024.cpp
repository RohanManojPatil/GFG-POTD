
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        Node *node = getNode(x);
        
        if(x<=head->data)
        {
            node->next = head;
            head->prev = node;
            head = node;
        }
        else
        {
            Node* prev = head, *curr = head->next;
            
            while(prev != NULL && curr != NULL)
            {
                if(prev->data <= x && x <= curr->data)
                {
                    break;
                }
                
                prev = curr;
                curr = curr->next;
            }
            
            if(curr == NULL)
            {
                prev->next = node;
                node->prev = prev;
            }
            else
            {
                prev->next = node;
                node->prev = prev;
                node->next = curr;
                curr->prev = node;
            }
        }
        
        return head;
    }
};
