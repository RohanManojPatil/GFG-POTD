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
    Node* reverse(Node* temp)
    {
        Node* curr = temp, *prev = NULL;
        
        while(curr != NULL)
        {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    bool isPalindrome(Node *head) {
        Node* slow = head, *fast = head, *prev = NULL, *temp = NULL;
        int cnt = 0;
        
        while(fast != NULL  && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast->next;
            }
            cnt++;
        }
        
        if(fast == NULL)
        {
            prev->next = reverse(slow);
            temp = prev->next;
        }
        else
        {
            slow->next = reverse(slow->next);
            temp = slow->next;
        }
        
        while(cnt>0 && temp != NULL)
        {
            if(head->data != temp->data)
            {
                return false;
            }
            
            head = head->next;
            temp = temp->next;
            cnt--;
        }
        
        if((temp == NULL && cnt > 0) || (temp != NULL && cnt == 0))
        {
            return false;
        }
        
        return true;
    }
};