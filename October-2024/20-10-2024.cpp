
*******************************GFG POTD******************************
*	               T.C = O(NlogN) 							                * 
*	               							                        * 
*	               S.C = O(N)                                          * 
*	                                                                * 
*********************************************************************

// User function Template for C++

/*
// a node of the doubly linked list
class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;
    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
struct cmp{
    bool operator()(int &a,int &b){
        return a>b;
    }  
    
};
class Solution {
  public:
// function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        // code here
        priority_queue<int,vector<int>,cmp> minHeap;
        DLLNode* iterate=head;
        DLLNode* update=head;
        
        while(iterate){
            minHeap.push(iterate->data);
            if(minHeap.size()>k){
                int topData=minHeap.top();
                minHeap.pop();
                update->data=topData;
                update=update->next;
                
            }
            
            iterate=iterate->next;
        }
        
        while(!minHeap.empty()){
            int topData=minHeap.top();
            minHeap.pop();
            update->data=topData;
            update=update->next;
            
        }
        
        return head;
    }
};