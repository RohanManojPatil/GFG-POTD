class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        for(auto num : arr1)
        {
            ans.push_back(num);
        }
        
        for(auto num : arr2)
        {
            ans.push_back(num);
        }
        
        sort(ans.begin(), ans.end());
        
        return ans[k-1];
    }
};