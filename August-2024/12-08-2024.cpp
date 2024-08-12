class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        vector<int> ans;
        int n = arr1.size();
        
        for(int i = 0; i<n; i++)
        {
            ans.push_back(arr1[i]);
            ans.push_back(arr2[i]);
        }
        
        sort(ans.begin(), ans.end());
        
        int mid = (n+n) / 2;
        
        return ans[mid] + ans[mid-1];
    }
};