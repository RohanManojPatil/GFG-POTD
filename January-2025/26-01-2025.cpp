*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        unordered_map<Node*, bool> mp;
        
        while(head->next != NULL)
        {
            if(mp.find(head->next) != mp.end())
            {
                head->next = NULL;
                return;
            }
            mp[head] = true;
            head = head->next;
        }
        
        
    }
};
