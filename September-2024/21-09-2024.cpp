/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

class Solution {
  public:
    Node *copyList(Node *head) {
        Node* temp = head;
        
        while(temp)
        {
            Node* cloneNode = new Node(temp->data);
            cloneNode->next = temp->next;
            temp->next = cloneNode;
            
            temp = temp->next->next;
        }
        
        temp = head;
        while(temp)
        {
            if(temp->random)
            {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
        
        Node* clone = new Node(0), *ans = clone;
        temp = head;
        
        while(temp)
        {
            clone->next = temp->next;
            clone = clone->next;
            temp->next = clone->next;
            temp = temp->next;
        }
        return ans->next;
    }
};