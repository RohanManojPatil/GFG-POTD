class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> vis(n+1, 0);
        vector<int> ans;
        vis[0] = 1;
        
        for(int i = 0; i<n; i++)
        {
            if(vis[arr[i]] == 0)
            {
                vis[arr[i]] = 1;
            }
            else if(vis[arr[i]] == 1)
            {
                ans.push_back(arr[i]);
            }
        }
        
        for(int i = 0; i<n+1; i++)
        {
            if(vis[i] == 0)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};