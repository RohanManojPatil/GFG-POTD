*******************************GFG POTD*************************
*	               T.C = O(NlogK)							                * 
*	               							                        * 
*	               S.C = O(k)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, pair<int, int>>> pq;
        int n = points.size();
        vector<vector<int>> ans;
        
        for(int i = 0; i<n; i++)
        {
            double distance = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            pq.push({distance, {points[i][0], points[i][1]}});
            
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        
        while(!pq.empty())
        {
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            
            ans.push_back({x, y});
            
            pq.pop();
        }
        
        return ans;
    }
};