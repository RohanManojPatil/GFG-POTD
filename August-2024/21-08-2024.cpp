// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<int> dist(N, 1e9), ans(N, -1);
        dist[src] = 0;
        unordered_map<int, list<int>> adj;

        for(auto edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        queue<int> q;
        q.push(src);
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            for(auto it : adj[node])
            {
                if(dist[node]+1 < dist[it])
                {
                    dist[it] = dist[node]+1;
                    q.push(it);
                }
            }
        }
        
        for(int i = 0; i<N; i++)
        {
            if(dist[i] != 1e9)
            {
                ans[i] = dist[i];
            }
        }
        
        return ans;
    }
};