
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        vector<Node*> ans;
        Node* temp1 = head, *temp2 = head->next;
        Node* head1 = temp1, *head2 = temp2;
        
        while(temp1 != NULL || temp2 != NULL)
        {
            Node* next1 = NULL;
            if(temp2 != NULL)
            {
                next1 = temp2->next;
            }
            if(temp1 != NULL)
            {
                temp1->next = next1;
            }
            
            temp1 = next1;
            
            Node* next2 = NULL;
            if(temp1 != NULL)
            {
                next2 = temp1->next;
            }
            if(temp2 != NULL)
            {
                temp2->next = next2;
            }
            
            temp2 = next2;
        }
        
        return {head1, head2};
    }
};