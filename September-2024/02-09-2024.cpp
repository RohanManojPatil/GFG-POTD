

class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        pq.push({grid[0][0], {0, 0}});
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, 0));
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        dist[0][0] = grid[0][0];
        int row[4] = {-1, 0, 1, 0};
        int col[4] = {0, 1, 0, -1};
        
        while(!pq.empty())
        {
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            
            pq.pop();
            if(vis[r][c] == 1)
            {
                continue;
            }
            
            vis[r][c] = 1;
            for(int i = 0; i<4; i++)
            {
                int x = r + row[i];
                int y = c + col[i];
                
                if(x>=0 && y>=0 && x<n && y<m)
                {
                    if(dist[x][y] > dist[r][c] + grid[x][y])
                    {
                        dist[x][y] = dist[r][c] + grid[x][y];
                        pq.push({dist[x][y], {x, y}});
                    }
                }
            }
        }
        
        return dist[n-1][m-1];
    }
};