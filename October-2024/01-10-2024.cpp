
*******************************GFG POTD******************************
*	               T.C = 	O(max(M, N))						    * 
*	               							                        * 
*	               S.C =   O(1)                                     * 
*	                                                                * 
*********************************************************************

/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        Node* temp1 = first, *temp2 = second;
        long long num1 = 0, num2 = 0, mod = 1e9+7;
        
        while(temp1 != NULL || temp2 != NULL)
        {
            if(temp1 != NULL)
            {
                num1 = ((num1*10)%mod) + temp1->data;
                temp1 = temp1->next;
            }
            
            if(temp2 != NULL)
            {
                num2  = ((num2*10)%mod) +  temp2->data;
                temp2 = temp2->next;
            }
        }
        
       long long ans = ((num1)%mod * (num2)%mod)%mod;
        
        return ans;
    }
};
