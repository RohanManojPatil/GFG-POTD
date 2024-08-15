// User function template for C++

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
    Node* reverseList(Node *head)
    {
        Node* curr = head;
        Node* prev = nullptr;
        
        while(curr != nullptr)
        {
            Node* nxt = curr -> next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        
        return prev;
    }
    
  public:
    Node* addOne(Node* head) {
        
        int carry = 0;
        
        Node* tmp = reverseList(head);
        Node* tmpHead = tmp;
        
        Node* ans = new Node(-1);
        Node* dummyNode = ans;
        
        int num = tmpHead -> data + 1;
        tmpHead -> data = num % 10;
        carry = num / 10;
        
        dummyNode -> next = new Node(tmpHead -> data);
        dummyNode = dummyNode -> next;
        
        tmpHead = tmpHead -> next;
        
        while(tmpHead != nullptr)
        {
            int num = tmpHead->data + carry;
            tmpHead -> data = num % 10;
            carry = num / 10;
            
            dummyNode -> next = new Node(tmpHead -> data);
            dummyNode = dummyNode -> next;
            
            tmpHead = tmpHead -> next;
        }
        
        if(carry != 0)
        {
            dummyNode -> next = new Node(1);
        }

        return reverseList(ans->next);
    }
};