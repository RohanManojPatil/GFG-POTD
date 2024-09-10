class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        long long ans = 0;
        
        for(auto num : arr)
        {
            pq.push(num);
        }
        
        while(pq.size() > 1)
        {
            int first = pq.top();
            pq.pop();
            
            int second = pq.top();
            pq.pop();
            
            ans += (first + second);
            pq.push(first+second);
        }
        
        return ans;
    }
};