// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int top = 0;
        for(int i = 0; i<arr.size(); i++)
        {
            pq.push(arr[i]);
        }
        
        while(k--)
        {
            top = pq.top();
            pq.pop();
        }
        
        return top;
    }
};