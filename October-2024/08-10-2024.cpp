
*******************************GFG POTD******************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                          * 
*	                                                                * 
*********************************************************************

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = 0; i<arr.size(); i++)
        {
            pq.push(arr[i]);
            
            while(pq.size()>2)
            {
                pq.pop();
            }
        }
        
        int val1 = pq.top();
        pq.pop();
        int val2 = pq.top();
        
        return val1 + val2;
    }
};