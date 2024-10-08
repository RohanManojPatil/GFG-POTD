/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        Node* slow = head, *fast = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            
            fast = fast->next;
            
            if(fast != NULL || fast->next != NULL)
            {
                fast = fast->next;
            }
        }
        
        return slow->data;
    }
};