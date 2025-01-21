*******************************GFG POTD*************************
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
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node* reverse(Node* first, Node* last)
    {
        Node* temp = first;
        Node* prev = NULL;
        
        while(temp != last)
        {
            Node* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        
        return prev;
    }
    Node *reverseKGroup(Node *head, int k) {
        int count = 0;
        Node* second = head;
        Node* first = head, *newHead = NULL;
        Node* temp = NULL;
        
        while(second != NULL)
        {
            while(second != NULL && count < k)
            {
                second = second->next;
                count++;
            }
            
            Node* node = reverse(first, second);
            
            if(newHead == NULL)
            {
                newHead = node;
            }
            else
            {
                temp->next = node;
            }
            
            temp = first;
            
            first = second;
            count = 0;
        }
        
        return newHead;
    }
};
