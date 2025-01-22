*******************************GFG POTD*************************
*	               T.C = O(N+M)							                * 
*	               							                        * 
*	               S.C = O(max(M, N))                                           * 
*	                                                                * 
*********************************************************************
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
public:
    void reverse(Node*& head) {
        Node* curr = head;
        Node* prev = nullptr;
        Node* next = nullptr;

        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev; 
    }

    struct Node* addTwoLists(struct Node* temp1, struct Node* temp2) {
        // Reverse both input lists
        reverse(temp1);
        reverse(temp2);

        Node* head = nullptr;
        Node* curr = nullptr;
        int carry = 0;

        // Add digits from both lists
        while (temp1 || temp2 || carry) {
            int sum = carry;

            if (temp1) {
                sum += temp1->data;
                temp1 = temp1->next;
            }
            if (temp2) {
                sum += temp2->data;
                temp2 = temp2->next;
            }

            carry = sum / 10;
            int digit = sum % 10;

            // Create a new node
            Node* newnode = new Node(digit);

            if (!head) {
                head = newnode; // Initialize the head of the result list
            } else {
                curr->next = newnode; // Append to the result list
            }
            curr = newnode; // Update current pointer
        }

        // Reverse the result list to restore original order
        reverse(head);

        // Remove leading zeros (if any)
        while (head && head->next && head->data == 0) {
            head = head->next;
        }

        return head;
    }
};
