
*******************************GFG POTD*************************
*	               T.C = O(Nlogk)							                * 
*	               							                        * 
*	               S.C = O(logk)                                           * 
*	                                                                * 
*********************************************************************
// User function Template for C++
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int index = 0;
        
        for(int i = 0; i<arr.size(); i++)
        {
            if(pq.size()>k)
            {
                int top = pq.top();
                pq.pop();
                arr[index] = top;
                index++;
            }
            
            pq.push(arr[i]);
        }
        
        while(!pq.empty())
        {
            arr[index] = pq.top();
            pq.pop();
            index++;
        }
    }
};