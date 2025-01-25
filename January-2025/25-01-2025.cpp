*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    Node* findFirstNode(Node* head) {
        unordered_map<Node*, bool> mp;
        
        while(head != NULL)
        {
            if(mp.find(head) != mp.end())
            {
                return head;
            }
            
            mp[head] = true;
            head = head->next;
        }
        
        return NULL;
    }
};