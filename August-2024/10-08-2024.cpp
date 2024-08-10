/*

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
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        int count = 0;
        Node* newHead = NULL;
        Node* temp = head;
        Node* prev = NULL;
        while(count != k)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        
        if(temp == NULL)
        {
            return head;
        }
        
        prev->next = NULL;
        newHead = temp;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = head;
        
        return newHead;
    }
};