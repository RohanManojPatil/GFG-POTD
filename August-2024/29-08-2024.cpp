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
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        unordered_map<Node*, int> mp;
        
        Node* temp = head;
        int count = 0;
        while(temp->next != NULL)
        {
            if(mp.find(temp->next) != mp.end())
            {
                return count-mp[temp->next]+1;
            }
            else
            {
                mp[temp] = count;
                temp = temp->next;
                count++;
            }
        }
        
        return 0;
    }
};