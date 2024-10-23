
*******************************GFG POTD******************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        unordered_map<int, int> prefixSum;
        int position = 1, currentSum = 0;
        
        while(head != NULL)
        {
            currentSum += head->data;
            prefixSum[position++] = currentSum;
            head = head->next;
        }
        
        return prefixSum[--position] - prefixSum[position-n];
    }
};